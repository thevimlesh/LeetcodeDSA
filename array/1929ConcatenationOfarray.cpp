#include <vector>

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> concatenated;
        concatenated.reserve(2 * n); // Reserve space to prevent reallocation
        for (int i = 0; i < 2 * n; i++) {
            concatenated.push_back(nums[i % n]);
        }
        return concatenated;
    }
};