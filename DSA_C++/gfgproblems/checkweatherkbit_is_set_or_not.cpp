#include <iostream>
using namespace std;

// Function to check if Kth bit of N is set
bool isKthBitSet(int N, int K) {
    // Right shift N by K bits and perform bitwise AND with 1
    // If the result is 1, the Kth bit is set, otherwise it's not set
    if (n& (1 << k))
        return true;
    else
        return false;
}

// Example usage
int main() {
    int n,k;
    cin<<n;
    cin<<k;

    if (isKthBitSet(n, k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}
