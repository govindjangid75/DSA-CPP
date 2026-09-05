#include <iostream>
using namespace std;

// Function to solve Tower of Hanoi puzzle
// src: source peg, helper: auxiliary peg, dest: destination peg
void towerOfHanoi(int n, char src, char helper, char dest) {
    // Base case: No disks to move
    if (n == 0) return;

    // Step 1: Move top (n-1) disks from src to helper using dest
    towerOfHanoi(n - 1, src, dest, helper);

    // Step 2: Move nth disk from src to dest
    cout << "Move disk " << n << " from " << src << " to " << dest << endl;

    // Step 3: Move (n-1) disks from helper to dest using src
    towerOfHanoi(n - 1, helper, src, dest);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    cout << "\nSteps to solve Tower of Hanoi for " << n << " disks:\n";
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
