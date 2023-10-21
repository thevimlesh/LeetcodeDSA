class Solution {
public:
  int mostWordsFound(vector<string>& sentences) {
    int max_words = 0;

    for (auto& sentence : sentences) {
      int word_count = 0;

      for (char c : sentence) {
        if (c == ' ') {
          word_count++;
        }
      }

      word_count++;
      max_words = max(max_words, word_count);
    }

    return max_words;
  }
};
