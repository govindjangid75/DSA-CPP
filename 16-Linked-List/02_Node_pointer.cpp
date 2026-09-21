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
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    // attaching nodes
    a->next = b;    // a is pointing to b
    b->next = c;    // b is pointing to c
    c->next = d;    // c is pointing to d
    d->next = NULL; // d is pointing to NULL and NULL IS A BASE ADDRESS

    // printing values using a pointer
    cout << a->value << endl;                   // 10
    cout << a->next->value << endl;             // 20
    cout << a->next->next->value << endl;       // 30
    cout << a->next->next->next->value << endl; // 40

    // b
    cout << b->value << endl;             // 20
    cout << b->next->value << endl;       // 30
    cout << b->next->next->value << endl; // 40

    // c
    cout << c->value << endl; // 30
    cout << c->next->value << endl;
    cout << c->next->next->value << endl;

    // d
    cout << d->value << endl;
    cout << d->next << endl;

    return 0;
}