#include <iostream>
using namespace std;
class name
{
public:              // access specifier
    string fullname; // data members
    int a, b, c;
    void printname() // member functions
    {
        cout << "My full name:" << fullname << endl;
    }
    void add()
    {
        c = a + b;
        cout << "Addition:" << c << endl;
    }
};
int main()
{
    name obj;                               // declaring an object for the class name
    obj.fullname = "sindhujaa nallathambi"; // accessing the data member
    obj.printname();                        // accessing the member functions
    obj.a = 10;
    obj.b = 20;
    obj.add();
    return 0;
}