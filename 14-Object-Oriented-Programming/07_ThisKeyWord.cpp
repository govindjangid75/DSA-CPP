#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    int hp;
    string type;

    Pokemon(string name,string type,int hp){
        this.name=name;
        this.type=type;
        this.hp=hp;
        // name=n;
        // type=t;
        // hp=h;

    //    name=name;
    //    type=type;
    //     hp=hp;
    }

    void display(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }

   

};

int main(){
    Pokemon p1("Pikachu","Electric",100);
    Pokemon p2("Charmander","Fire",99);
    Pokemon p3("Squirtle","Water",80);
    Pokemon p4("Mewtwo","Psychic",90);
    p1.display();
    p2.display();
    p3.display();
    p4.display();
}