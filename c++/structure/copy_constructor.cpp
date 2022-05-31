#include <iostream>
using namespace std;
class A
{
private:
    int x, y; // data members

public:
    A(int x1, int y1) // construtor with parameters
    {
        x = x1;
        y = y1;
    }

    /* Copy constructor */
    A(const A &sam)
    {
        x = sam.x;
        y = sam.y;
    }

    void display()
    {
        cout << x << " " << y << endl;
    }
};
/* main function */
int main()
{
    A obj1(10, 15); // Normal constructor
    A obj2 = obj1;  // Copy constructor
    cout << "Normal constructor : ";
    obj1.display();
    cout << "Copy constructor : ";
    obj2.display();
    return 0;
}
