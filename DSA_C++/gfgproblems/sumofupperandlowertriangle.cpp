#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sumTriangles(vector<vector<int>> &mat, int N) {
        int upper_sum = 0;
        int lower_sum = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i <= j) { // Upper triangle condition
                    upper_sum += mat[i][j];
                }
                if (i >= j) { // Lower triangle condition
                    lower_sum += mat[i][j];
                }
            }
        }

        return {upper_sum, lower_sum};
    }
};

// Sample usage
int main() {
    Solution solution;
    vector<vector<int>> mat = {{6, 5, 4}, {1, 2, 5}, {7, 9, 7}};
    int N = 3;
    vector<int> result = solution.sumTriangles(mat, N);
    cout << "Upper sum: " << result[0] << ", Lower sum: " << result[1] << endl;
    return 0;
}