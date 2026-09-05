#include <iostream>
#include <string>
using namespace std;

// Remove all occurrences of a target character from string recursively
string removeChar(string s, int idx, char target) {
    if (idx == s.length()) return "";

    string rest = removeChar(s, idx + 1, target);
    if (s[idx] == target) {
        return rest; // Skip the target character
    } else {
        return s[idx] + rest; // Include current character
    }
}

int main() {
    string str = "abracadabra";
    char target = 'a';

    cout << "Original string: " << str << endl;
    cout << "After removing '" << target << "': " << removeChar(str, 0, target) << endl;

    return 0;
}
