#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;
    float milage;
    bool isE20Comptible;

};

int main(){
     
    Car c1;
    c1.name = "BMW";
    c1.color = "Black";
    c1.milage = 20.5;
    c1.isE20Comptible = true;
    

    Car  c2={"Toyota","white",19.5,false};
    
    return 0;
}