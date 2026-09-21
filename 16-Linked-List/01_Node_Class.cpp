#include <iostream>
using namespace std;

class Node // user defined data type
{
public:
    int value;
    Node *next;
    Node(int value) // constructor
    {
        this->value = value;
    }
};

int main()
{
    Node a(10);
    // a.value = 10;
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);

    a.next = &b; // a is pointing to b
    b.next = &c; // b is pointing to c
    c.next = &d; // c is pointing to d
    d.next = &e; // d is pointing to e
    // e.next = NULL; // e is pointing to NULL

    cout << a.value << endl;                         // 10
    cout << a.next->value << endl;                   // 20
    cout << a.next->next->value << endl;             // 30
    cout << a.next->next->next->value << endl;       // 40
    cout << a.next->next->next->next->value << endl; // 50

    cout << (*(a.next)).value << endl; // 20


    // a ka next b ka address hai 
    return 0;
}