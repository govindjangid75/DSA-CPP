// deque --> double ended queue
// in which we can insert and delete elements from both front and back
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq;
    deque<int> dq2(5, 0); // size 5, all 0

    // inserting elements from back side
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    // [10, 20,30]

    dq.push_front(5);
    dq.push_front(6);
    dq.push_front(7);
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // [7, 6, 5, 10, 20, 30]

    // deletion in

    // dq.pop_back();
    // dq.pop_front();

    // for (int x : dq)
    //     cout << x << " ";
    // cout << endl;

    // dq.insert(dq.begin() + 1, 15);
    // dq.erase(dq.begin() + 1);
    // for (int x : dq)
    //     cout << x << " ";
    // cout << endl;

    // dq2.swap(dq);
    // for (int x : dq)
    //     cout << x << " ";
    // cout << endl;

    dq.clear();
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    return 0;
}