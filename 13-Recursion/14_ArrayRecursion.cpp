#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Print array recursively
void printArray(int arr[], int n, int idx) {
    if (idx == n) return;
    cout << arr[idx] << " ";
    printArray(arr, n, idx + 1);
}

// Find maximum element recursively
int findMax(int arr[], int n, int idx) {
    if (idx == n - 1) return arr[idx];
    return max(arr[idx], findMax(arr, n, idx + 1));
}

// Check if array is sorted in ascending order
bool isSorted(int arr[], int n, int idx) {
    if (idx >= n - 1) return true;
    if (arr[idx] > arr[idx + 1]) return false;
    return isSorted(arr, n, idx + 1);
}

// Recursive sum of array
int arraySum(int arr[], int n, int idx) {
    if (idx == n) return 0;
    return arr[idx] + arraySum(arr, n, idx + 1);
}

int main() {
    int arr[] = {3, 7, 12, 18, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    printArray(arr, n, 0);
    cout << "\n";

    cout << "Max element: " << findMax(arr, n, 0) << endl;
    cout << "Array Sum: " << arraySum(arr, n, 0) << endl;
    cout << "Is sorted? " << (isSorted(arr, n, 0) ? "Yes" : "No") << endl;

    return 0;
}
