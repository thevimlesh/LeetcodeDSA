#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minDist(int a[], int n, int x, int y) {
        int min_dist = INT_MAX;
        int prev = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == x || a[i] == y) {
                if (prev != -1 && a[i] != a[prev]) {
                    min_dist = min(min_dist, i - prev);
                }
                prev = i;
            }
        }

        if (min_dist == INT_MAX) {
            return -1;
        }
        return min_dist;
    }
};

int main() {
    // Example usage
    Solution sol;
    int arr[] = {1, 2, 3, 2};
    int n = 4;
    int x = 1;
    int y = 2;
    cout << sol.minDist(arr, n, x, y) << endl;

    int arr2[] = {86, 39, 90, 67, 84, 66, 62};
    int n2 = 7;
    int x2 = 42;
    int y2 = 12;
    cout << sol.minDist(arr2, n2, x2, y2) << endl;

    return 0;
}
