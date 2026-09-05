#include <iostream>
#include <vector>
using namespace std;

// Check if any subset sums up to target K using Pick / Don't Pick recursion
bool hasSubsetSum(vector<int> &arr, int idx, int target) {
    // Base Case 1: Target reached
    if (target == 0) return true;

    // Base Case 2: Out of elements or target became negative
    if (idx == arr.size() || target < 0) return false;

    // Pick current element OR Don't pick current element
    bool pick = hasSubsetSum(arr, idx + 1, target - arr[idx]);
    bool dontPick = hasSubsetSum(arr, idx + 1, target);

    return pick || dontPick;
}

int main() {
    vector<int> arr = {2, 4, 6, 10};
    int target = 16;

    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\nTarget: " << target << endl;

    if (hasSubsetSum(arr, 0, target)) {
        cout << "Result: Yes, a subset with sum " << target << " exists!\n";
    } else {
        cout << "Result: No subset with sum " << target << " exists.\n";
    }

    return 0;
}
