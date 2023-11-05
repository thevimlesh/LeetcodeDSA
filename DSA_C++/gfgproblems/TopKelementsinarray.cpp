#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> topK(vector<int>& nums, int k) {
    unordered_map<int, int> count;
    for (int num : nums) {
        count[num]++;
    }
    
    vector<pair<int, int>> count_vec;
    for (auto it : count) {
        count_vec.push_back(it);
    }

    sort(count_vec.begin(), count_vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second > b.second;
    });

    vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(count_vec[i].first);
    }

    return result;
}

// Example usage:
// int main() {
//     vector<int> nums = {1, 1, 1, 2, 2, 3};
//     int k = 2;
//     vector<int> result = topK(nums, k);
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }
