
#include <iostream>
using namespace std;

class Node // User-defined data type
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

class MyStack
{
public:
    Node *head;
    Node *tail;
    int length;

    MyStack()
    {
        head = tail = NULL;
        length = 0;
    }

    // Insert element at the top
    void push(int value)
    {
        Node *n = new Node(value);

        n->next = head;
        head = n;

        if (tail == NULL)
        {
            tail = n;
        }

        length++;
    }

    // Remove top element
    void pop()
    {
        if (length == 0)
        {
            cout << "Stack is empty\n";
            return;
        }

        Node *toBeDeleted = head;
        head = head->next;

        delete toBeDeleted;
        length--;

        if (head == NULL)
        {
            tail = NULL;
        }
    }

    // Display top element
    void get()
    {
        if (length == 0)
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Top element: " << head->value << endl;
    }

    // Return stack size
    int size()
    {
        return length;
    }

    // Display all elements
    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Check whether stack is empty
    bool isEmpty()
    {
        return length == 0;
    }

    // Free allocated memory
    ~MyStack()
    {
        while (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    MyStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack elements: ";
    st.display();

    st.get();

    cout << "Stack size: " << st.size() << endl;

    st.pop();

    cout << "After pop: ";
    st.display();

    st.get();

    return 0;
}
