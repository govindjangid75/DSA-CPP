#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Generate all permutations by swapping elements
void printPermutations(string &s, int idx) {
    // Base case: If we reached the last character
    if (idx == s.length() - 1) {
        cout << s << endl;
        return;
    }

    for (int i = idx; i < s.length(); i++) {
        // Choose / Action: Swap current index with i
        swap(s[idx], s[i]);

        // Recurse for the next index
        printPermutations(s, idx + 1);

        // Backtrack: Undo swap to restore original string
        swap(s[idx], s[i]);
    }
}

int main() {
    string str;
    cout << "Enter a string (e.g. ABC): ";
    cin >> str;

    cout << "\nAll permutations of \"" << str << "\":\n";
    printPermutations(str, 0);

    return 0;
}
