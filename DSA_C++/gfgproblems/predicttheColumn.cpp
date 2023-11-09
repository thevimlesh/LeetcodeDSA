#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int columnWithMaxZero(int N, int arr[][100]) {
        int column_with_max_zero = -1;
        int max_zero_count = 0;

        for (int col = 0; col < N; col++) {
            int zero_count = 0;

            for (int row = 0; row < N; row++) {
                if (arr[row][col] == 0) {
                    zero_count++;
                }
            }

            if (zero_count > max_zero_count) {
                max_zero_count = zero_count;
                column_with_max_zero = col;
            }
        }

        return column_with_max_zero;
    }
};

int main() {
    Solution solution;
    int N = 3;
    int arr[3][3] = {{0, 0, 0}, {1, 0, 1}, {0, 1, 1}};

    int column_with_max_zero = solution.columnWithMaxZero(N, arr);
    cout << column_with_max_zero << endl;

    return 0;
}