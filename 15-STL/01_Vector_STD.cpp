#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Declaration
    vector<int> v = {10, 20, 30};
    vector<int> a(5, 0); // size 5, all 0

    // Add & Remove
    v.push_back(40);
    v.pop_back();
    v.insert(v.begin() + 1, 15);
    v.erase(v.begin() + 1);

    // Access
    cout << "First: " << v.front() << ", Last: " << v.back() << endl;
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // Iterate
    for (int x : v) cout << x << " ";
    cout << endl;

    // Sort & Reverse
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // 2D Vector (2x3)
    vector<vector<int>> matrix(2, vector<int>(3, 0));

    return 0;
}
