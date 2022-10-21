#include <iostream>
using namespace std;
class Flower
{
public:
    string color; //data member (also instance variable)
    string name;  //data member(also instance variable)
    Flower()      //constructor
    {
        cout << "Flower Object Created!" << endl;
    }
    ~Flower() //destructor
    {
        cout << "Flower Object Destructed!" << endl;
    }
    // void display()
    // {
    //     cout << color << "  " << name << endl;
    // }
};
int main(void)
{
    Flower rose; //creating an object
    Flower sunflower; 
    //rose.display();
    return 0;
}