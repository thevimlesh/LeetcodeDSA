 #include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;
        while (true) {
            char curr_ch = 0;
            for (auto& str : strs) {
                if (i >= str.size() || (curr_ch != 0 && str[i] != curr_ch)) {
                    return ans;
                }
                if (curr_ch == 0) {
                    curr_ch = str[i];
                }
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }
};
