#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Returns sum of bitwise XOR of all pairs
    long long int sumXOR(int arr[], int n) {
        long long int total = 0; // Variable to store the sum of XORs

        for (int i = 0; i < 32; i++) {
            long long int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] & (1 << i)) {
                    count++;
                }
            }
            total += (1LL << i) * count * (n - count);
        }

        return total;
    }
};

int main() {
    Solution obj;
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long int result = obj.sumXOR(arr, n);
    std::cout << "Sum of bitwise XOR of all pairs: " << result << std::endl;

    return 0;
}
