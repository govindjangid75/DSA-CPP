#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    int marks;
    void display(string name, int rollno){
        cout<<name<<" "<<rollno<<endl;
    }

    void avgmarks(int marks1, int marks2, int marks3){
        marks=(marks1+marks2+marks3)/3;
        cout<<marks<<endl;
    }

};


 void print(Student s2){
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.marks<<endl;
 }

int main(){

    Student s1;
    s1.display("Rahul", 1);
    s1.avgmarks(50,60,70);
   

    // print(Student s1);
    print(s1);
}

