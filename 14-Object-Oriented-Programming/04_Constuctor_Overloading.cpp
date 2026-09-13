#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    Car(string n, int p){  // parameterized constructor
        name = n;
        price = p;
    }

    Car(int p, string n){  // parameterized constructor
        {
            name = n;
            price = p;
        }
};
int main(){


    Car c1("BMW", 1000000);
    cout<<c1.name<<" "<<c1.price<<endl;

    Car c2(2000000,"Audi"`);
    cout<<c2.name<<" "<<c2.price<<endl;
}