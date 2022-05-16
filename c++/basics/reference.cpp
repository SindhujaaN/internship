#include <iostream>
using namespace std;
static int x1 = 10;

int &test_ref_func()
{
    return x1;
}

int main()
{
    int x = 10;
    int &y = x;
    int &z = y;
    cout << "value of x:" << x << endl;
    cout << "address of x:" << &x << endl;
    cout << "values of y:" << y << endl;
    cout << "address of y:" << &x << endl;
    cout << "values of z:" << y << endl;
    cout << "address of z:" << &x << endl;
    x = 20;
    cout << "value of x:" << x << endl;
    cout << "values of y:" << y << endl;
    cout << "values of z:" << y << endl;

    cout << "Check the ref from func" << endl;
    cout << "Value of static variable x1:" << x1 << endl;
    int y1 = test_ref_func();
    y1 = 100;
    // test_ref_func() = 100;
    // The above call is equivalent to direct assignment
    cout << "Value of static variable x1:" << x1 << endl;
    return 0;
}