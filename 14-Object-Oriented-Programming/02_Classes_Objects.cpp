#include<iostream>
#include<string>
using namespace std;

class Students{
    public:
    string name;
    int rollno;
};

int main(){

    Students s1;
    s1.name = "Rahul";
    s1.rollno = 1;

    cout<<s1.name<<" "<<s1.rollno<<endl;

    Students s2;
    s2.name = "Rohit";
    s2.rollno = 2;

    cout<<s2.name<<" "<<s2.rollno<<endl;  
    return 0;
}