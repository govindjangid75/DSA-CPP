// Access Modifires
// Public, Private, Protected

// private ::> default  || agr hum defined na kre toh

// privvate :: used only within the class

#include <iostream>
using namespace std;

class Crickter
{
private:
    int runs;

public:
    string name;

    float average;

    Crickter(string name, int runs, float average)
    {
        this->name = name;
        // this->name = name;  // both are same
        this->runs = runs;
        this->average = average;
    }
    void print()
    {
        cout << name << " " << runs << " " << average << endl;
    }
    // GETTER FUNCTION
    //  TODO:
    int getRuns()
    {
        return runs;
    }
};

int main()
{

    // TODO: RUNS CAN'T BE ACCESSED BEACUSE ITS PRIVATE
    Crickter *c = new Crickter("Shikhar Dhawan", 100, 50);
    // cout<<c->name<<endl;
    // // cout<<c->runs<<endl;
    // cout<<c->average<<endl;

    c->print();
    // TODO: RUNS OR SARI DETAILS AA JAYEGI

    return 0;
}