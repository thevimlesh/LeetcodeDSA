#include <iostream>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(std::string str1, std::string str2) {
        if (str1.length() != str2.length()) {
            return false;
        }

        std::unordered_map<char, char> charMap;
        std::unordered_set<char> mappedChars;

        for (int i = 0; i < str1.length(); ++i) {
            char char1 = str1[i];
            char char2 = str2[i];

            if (charMap.find(char1) != charMap.end()) {
                // If char1 is already mapped, it should map to char2
                if (charMap[char1] != char2) {
                    return false;
                }
            } else {
                // If char1 is not mapped yet, check if char2 is already mapped to another character
                if (mappedChars.find(char2) != mappedChars.end()) {
                    return false;
                }

                charMap[char1] = char2;
                mappedChars.insert(char2);
            }
        }

        return true;
    }
};

int main() {
    Solution solution;

    std::string str1 = "aab";
    std::string str2 = "xxy";

    if (solution.areIsomorphic(str1, str2)) {
        std::cout << "Output: 1\n";
    } else {
        std::cout << "Output: 0\n";
    }

    return 0;
}
