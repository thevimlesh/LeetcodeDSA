#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P) {
        vector<int> freq(N, 0);
// made a new array name frequency of N size initialised with 0 n=now when the arr[i] will be at the same index it will be reamin same or increment it 
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= N) {
                freq[arr[i] - 1]++;
            }
        }

        for (int i = 0; i < N; i++) {
            arr[i] = freq[i];
        }
    }
};

int main() {
    long long t;
    cin >> t;
    while (t--) {
        int N, P;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        ob.frequencyCount(arr, N, P);
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
