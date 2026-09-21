#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
    }
};

void Print_Rec(Node *head)
{
    if (head == NULL)
    {
        cout << endl;
        return;
    }
    cout << head->value << " -> ";
    Print_Rec(head->next);
}

void Reverse_Print(Node *head)
{
    if (head == NULL)
    {
        cout << endl;
        return;
    }
   
    Reverse_Print(head->next);
     cout << head->value << " -> ";
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    Print_Rec(a);

    Reverse_Print(a);

    return 0;
}