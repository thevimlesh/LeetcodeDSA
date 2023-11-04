#include <iostream>
using namespace std;

class Solution {
public:
    int transitionPoint(int arr[], int n) {
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == 1) {
                if (mid == 0 || arr[mid - 1] == 0) {
                    return mid;
                } else {
                    high = mid - 1;
                }
            } else {
                low = mid + 1;
            }
        }
        return -1; // Return -1 if there is no transition point
    }
};

// For testing the solution
int main() {
    Solution s;
    int arr1[] = {0, 0, 0, 1, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Output 1: " << s.transitionPoint(arr1, n1) << endl;

    int arr2[] = {0, 0, 0, 0};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Output 2: " << s.transitionPoint(arr2, n2) << endl;

    return 0;
}
