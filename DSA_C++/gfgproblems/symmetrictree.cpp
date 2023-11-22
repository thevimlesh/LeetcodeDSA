#include <iostream>

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution{
public:
    bool isSymmetricUtil(Node* leftSubtree, Node* rightSubtree) {
        if (leftSubtree == nullptr && rightSubtree == nullptr)
            return true;

        if (leftSubtree == nullptr || rightSubtree == nullptr)
            return false;

        return (leftSubtree->data == rightSubtree->data) &&
               isSymmetricUtil(leftSubtree->left, rightSubtree->right) &&
               isSymmetricUtil(leftSubtree->right, rightSubtree->left);
    }

    bool isSymmetric(Node* root) {
        if (root == nullptr)
            return true;

        return isSymmetricUtil(root->left, root->right);
    }
};

int main() {
    // Create your binary tree here
    Node* root = new Node(5);
    root->left = new Node(1);
    root->right = new Node(1);
    root->left->left = new Node(2);
    root->right->right = new Node(2);

    Solution solution;
    if (solution.isSymmetric(root)) {
        std::cout << "Tree is symmetric." << std::endl;
    } else {
        std::cout << "Tree is not symmetric." << std::endl;
    }

    return 0;
}
