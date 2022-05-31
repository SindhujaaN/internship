#include <iostream>

using namespace std;

class A
{
private:
    int x;

public:
    // Default Constructor

    /* A()
     {
         x = 20;
     }*/
    A() : x(20) {}

    friend class B; // Friend Class
};

class B
{
private:
    int y;

public:
    // Accessing private members
    B() : y(10) {}
    int display(A obj)
    {
        return obj.x + y;
    }
};

int main()
{
    cout << "Welcome!" << endl;
    A obj;
    B obj2;
    obj2.display(obj);
    cout << "Sum:" << obj2.display(obj) << endl;
    return 0;
}