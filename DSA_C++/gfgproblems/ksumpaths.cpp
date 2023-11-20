#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution{
public:
    int countPaths(Node *root, int k) {
        unordered_map<int, int> pathSumCount;
        return dfs(root, k, 0, pathSumCount);
    }

    int dfs(Node *node, int k, int currentSum, unordered_map<int, int> &pathSumCount) {
        if (!node)
            return 0;

        currentSum += node->data;
        int totalCount = pathSumCount[currentSum - k];

        if (currentSum == k)
            totalCount++;

        pathSumCount[currentSum]++;
        totalCount += dfs(node->left, k, currentSum, pathSumCount);
        totalCount += dfs(node->right, k, currentSum, pathSumCount);
        pathSumCount[currentSum]--;

        return totalCount;
    }
};

int main() {
    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(-1);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->right->left = new Node(4);
    root->right->right = new Node(5);
    root->left->right->left = new Node(1);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(2);
    root->right->right->right = new Node(6);

    int k = 5;
    Solution sol;
    int pathsCount = sol.countPaths(root, k);
    cout << "Number of paths with sum " << k << " = " << pathsCount << endl;

    return 0;
}
