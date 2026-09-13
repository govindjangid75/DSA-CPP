// make a class which support addtion multiplication and simplify

#include<iostream>

using namespace std;

class Fraction{

  public:
  int num;
  int den;
  
  Fraction(int num,int den){
      this->num=num;
      this->den=den;
  }

  void display(){
      cout<<num<<"/"<<den<<endl;
    }

    Fraction(){

    }
   

};

Fraction multiply(Fraction& f1,Fraction& f2 ){
    Fraction ans;
    ans.num=f1.num*f2.num;
    ans.den=f1.den*f2.den;
    return res;
}
int main(){
    Fraction f1(2,5);
    Fraction f2(3,9);
    f1.display();
    f2.display();
}