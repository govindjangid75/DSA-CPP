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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    // attaching nodes
    a->next = b;
    b->next = c;    // b is pointing to c
    c->next = d;    // c is pointing to d
    d->next = NULL; // d is pointing to NULL and NULL IS A BASE ADDRESS

    print(a);

    return 0;
}