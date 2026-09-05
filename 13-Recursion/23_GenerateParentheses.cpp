#include <iostream>
#include <string>
#include <vector>
using namespace std;

// LeetCode 22: Generate Parentheses
// open: count of '(' used so far
// close: count of ')' used so far
void generateParentheses(int n, int open, int close, string current) {
    // Base Case: valid combination of length 2*n reached
    if (open == n && close == n) {
        cout << current << endl;
        return;
    }

    // Rule 1: We can always add an opening bracket if open < n
    if (open < n) {
        generateParentheses(n, open + 1, close, current + "(");
    }

    // Rule 2: We can add a closing bracket only if close < open
    if (close < open) {
        generateParentheses(n, open, close + 1, current + ")");
    }
}

int main() {
    int n;
    cout << "Enter number of pairs of parentheses: ";
    cin >> n;

    cout << "\nValid Parentheses combinations for n = " << n << ":\n";
    generateParentheses(n, 0, 0, "");

    return 0;
}
