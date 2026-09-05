#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Print all subsets/subsequences of a string using "Take / Not Take" pattern
void printSubsets(string &s, int idx, string current) {
    // Base case: processed all characters
    if (idx == s.length()) {
        cout << "\"" << current << "\"" << endl;
        return;
    }

    // Choice 1: Take current character
    printSubsets(s, idx + 1, current + s[idx]);

    // Choice 2: Don't take current character
    printSubsets(s, idx + 1, current);
}

int main() {
    string str;
    cout << "Enter a string (e.g. abc): ";
    cin >> str;

    cout << "\nAll subsets of \"" << str << "\":\n";
    printSubsets(str, 0, "");

    return 0;
}
