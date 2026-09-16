#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    float average;

    Cricketer(string name, int runs, float average) {
        (*this).name = name;
        // this->name = name;  // both are same 
        this->runs = runs;
        this->average = average;
    }

    void display() {
        cout << name << " " << runs << " " << average << endl;
    }
};

int main() {

    Cricketer c1("Virat Kohli", 14000, 58.7);
    Cricketer c2("Rohit Sharma", 8000, 48.7);
    Cricketer c3("Sachin Tendulkar Sir", 23000, 48.7);

    Cricketer *ptr = &c1;

    (*ptr).name = "MS Dhoni";

    // cout << (*ptr).name << endl;

    // cout << ptr->name << endl;

    ptr->display();


    return 0;
}