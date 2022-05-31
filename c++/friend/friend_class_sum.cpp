#include <iostream>
using namespace std;
class A
{
private:
    int x;
    friend class B;

public:
    A() : x(10)
    {
    }
};
class B
{
private:
    int y;

public:
    B() : y(10)
    {
    }
    int sum()
    {
        A obj1;
        return obj1.x + y;
    }
};
int main()
{
    B obj2;
    cout << "sum:" << obj2.sum() << endl;
    return 0;
}