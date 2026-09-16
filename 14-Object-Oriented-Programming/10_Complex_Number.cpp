// Create a complex number class
// addition and substraction and multiplication and division
#include<iostream>
using namespace std;

class Complex{
public:
    float real;
    float imaginary;
    Complex(float real, float imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }

    void add (Complex c1, Complex c2){
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
    }
    void subs(Complex c1, Complex c2){
        real = c1.real - c2.real;
        imaginary = c1.imaginary - c2.imaginary;
    }

    void mul(Complex c1, Complex c2){
        real = c1.real * c2.real - c1.imaginary * c2.imaginary;
        imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    }

    void div(Complex c1, Complex c2){
        real = (c1.real * c2.real + c1.imaginary * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
        imaginary = (c1.imaginary * c2.real - c1.real * c2.imaginary) / (c2.real * c2.real + c2.imaginary * c2.imaginary);
    }
  
};


int main(){
    Complex c1(1,2);
    c1.print();

    Complex c2(3,4);
    c2.print();

    c1.add(c1,c2);
    c1.print();

    return 0;


}
