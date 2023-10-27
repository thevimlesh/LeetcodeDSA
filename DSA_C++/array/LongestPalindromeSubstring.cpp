class Solution {
public:
  string longestPalindrome(string s) {
    int n = s.length();
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
      dp[i][i] = true;
    }

    int max_len = 1;
    string longest_palindrome = s.substr(0, 1);

    for (int i = n - 1; i >= 0; i--) {
      for (int j = i + 1; j < n; j++) {
        if (s[i] == s[j] && (j - i <= 2 || dp[i + 1][j - 1])) {
          dp[i][j] = true;
          if (j - i + 1 > max_len) {
            max_len = j - i + 1;
            longest_palindrome = s.substr(i, max_len);
          }
        }
      }
    }

    return longest_palindrome;
  }
};
