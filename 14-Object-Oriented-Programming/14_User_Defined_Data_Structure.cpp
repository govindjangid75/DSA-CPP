// User defined data structure bnana

#include <iostream>
using namespace std;

// create your vector
// 1.size
// 2.capacity
// 3.push_back
// 4.pop_back
// 5.index v[i]

class MyVector
{
public:
    int length;
    int *arr; // array hai ye
    int cap;
    MyVector(int capacity, int default_value)
    {
        cap = length = capacity;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = default_value;
        }
    }

    void pop_back()
    {
        length--;
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void push_back(int value)
    {
        if (length == cap)
        {
            int temp[cap * 2];
            for (int i = 0; i < cap; i++)
            {
                temp[i] = arr[i];
            }
            delete arr;
            arr = temp;
            cap *= 2;
        }
        arr[length++] = value;
    }
};

int main()
{

    MyVector v(5, -1);
    v.display();
    v.pop_back();
    v.push_back(100);
    v.push_back(20);
    v.push_back(203);
    v.display();
    // cout << " " << v.arr[0] << " " << v.arr[1] << " " << v.arr[2] << " " << v.arr[3] << " " << v.arr[4] << endl;
}

//  int* arr=new int(5);

//     int b[]={2,34,4};

//     arr=b;

//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];