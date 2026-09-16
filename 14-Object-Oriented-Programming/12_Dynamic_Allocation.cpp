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
};
int main() {
   
    int x=10;

    // TODO:
    int* y=new int(10);
    // int bna value 10 hai uski or may be name ho uska shyad nhi ho
    // then ek pointer create hoga or usme address of 10 aayega usme



    Cricketer c1("Virat Kohli", 14000, 58.7);
    Cricketer c2("Rohit Sharma", 8000, 48.7);
    Cricketer c3("Sachin Tendulkar Sir", 23000, 48.7);


    // TODO:  IS OBJECT KA KOI NAME NHI HAI BUT MEMORY KI ADDRESS HAI
    Cricketer* ptr = new Cricketer("MS Dhoni", 12000, 48.7);
    // HEAP MEMORY USED HERE
    //  TODO:


    return 0;
}