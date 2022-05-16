#include <iostream>
using namespace std;

int main()
{
    int val = 10;
    int *ptr = &val;

    cout << "value of ptr:" << *ptr << endl;
    cout << "Address of ptr:" << ptr << endl;
    *ptr = 20;
    cout << "value of ptr:" << *ptr << endl;
    cout << "Address of ptr:" << ptr << endl;
}