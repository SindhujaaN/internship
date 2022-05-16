#include <iostream>
using namespace std;
class operations
{

public:
    operations()
    {
        cout << "Math operations:" << endl;
    }
};
class addition : public operations
{
public:
    int a = 10, b = 20, c;
    addition()
    {
        c = a + b;
        cout << "Addition:" << c << endl;
    }
};
class subtraction : public addition
{
public:
    subtraction()
    {
        int a = 10, b = 20, d;
        d = b - a;
        cout << "subtraction:" << d << endl;
    }
};

int main()
{
    subtraction obj1;

    return 0;
}