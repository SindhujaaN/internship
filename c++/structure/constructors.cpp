#include <iostream>
#include <string>
using namespace std;
class Fruits
{
public:
    string fruit_name;
    string color;
    string shape;
    Fruits(string x, string y, string z); // declaration of constructor
};
Fruits::Fruits(string x, string y, string z) // defining constructor out of the class
{
    fruit_name = x;
    color = y;
    shape = z;
}
int main()
{
    Fruits obj1("apple", "red", "circle");
    Fruits obj2("mango", "yellow", "oval");
    cout << obj1.fruit_name << " " << obj1.color << " " << obj1.shape << endl;
    cout << obj2.fruit_name << " " << obj2.color << " " << obj2.shape << endl;
    return 0;
}