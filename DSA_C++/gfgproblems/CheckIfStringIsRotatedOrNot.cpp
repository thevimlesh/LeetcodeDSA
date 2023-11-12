#include <iostream>
#include <string>

using namespace std;

class RotationChecker {
public:
    // Function to check if string 'b' can be obtained by rotating string 'a' by exactly 2 places in any direction
    static bool isRotated(string a, string b) {
        // Check if lengths of both strings are the same
        if (a.length() != b.length()) {
            return false;
        }

        int len = a.length();

        // Check if string 'b' is obtained by rotating string 'a' by 2 places clockwise
        if ((a.substr(2) + a.substr(0, 2)) == b) {
            return true;
        }

        // Check if string 'b' is obtained by rotating string 'a' by 2 places anti-clockwise
        if ((a.substr(len - 2) + a.substr(0, len - 2)) == b) {
            return true;
        }

        // If neither clockwise nor anti-clockwise rotation results in string 'b'
        return false;
    }
};

int main() {
    // Example 1
    string a1 = "amazon";
    string b1 = "azonam";
    cout << "Example 1: " << RotationChecker::isRotated(a1, b1) << endl;

    // Example 2
    string a2 = "geeksforgeeks";
    string b2 = "geeksgeeksfor";
    cout << "Example 2: " << RotationChecker::isRotated(a2, b2) << endl;

    return 0;
}
