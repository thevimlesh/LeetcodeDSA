class Solution {
public:
  int countVowelPermutation(int n) {
    const int MOD = 1e9 + 7;

    // Initializing the vectors to store counts for each vowel
    vector<long long> a(n, 1), e(n, 1), i(n, 1), o(n, 1), u(n, 1);

    // Iterating through each position and applying the rules to update the counts
    for (int j = 1; j < n; ++j) {
      a[j] = (e[j - 1]) % MOD;
      e[j] = (a[j - 1] + i[j - 1]) % MOD;
      i[j] = (a[j - 1] + e[j - 1] + o[j - 1] + u[j - 1]) % MOD;
      o[j] = (i[j - 1] + u[j - 1]) % MOD;
      u[j] = (a[j - 1]) % MOD;
    }

    // Summing up the counts for all vowels
    int result = (a[n - 1] + e[n - 1] + i[n - 1] + o[n - 1] + u[n - 1]) % MOD;

    return result;
  }
};
