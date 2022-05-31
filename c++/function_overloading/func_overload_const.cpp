#include <iostream>
using namespace std;
class Test
{

    int x;

public:
    Test(int i)
    {
        x = i;
    }
    void func() const
    {
        cout << "func() const is called" << endl;
    }
    void func()
    {
        cout << "func() is called" << endl;
    }
};
int main()
{
    Test obj(10);
    obj.func();
    const Test obj1(20);
    obj1.func();
    return 0;
}