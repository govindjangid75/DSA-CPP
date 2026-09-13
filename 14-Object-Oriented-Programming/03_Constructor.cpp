#include<iostream>
using namespace std;

class Car
{
    public:
    string name;
    int price;

    Car(){  // default constructor
        name = "BMW";
        price = 1000000;

    }

    Car(string n, int p){  // parameterized constructor
        name = n;
        price = p;
    }


};

int main(){


    Car c1;
    cout<<c1.name<<" "<<c1.price<<endl;

    Car c2("Audi", 2000000);
    cout<<c2.name<<" "<<c2.price<<endl;
}
