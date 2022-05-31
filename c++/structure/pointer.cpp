#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "sindhu";
    string *ptr = &name;
    cout << name << endl;
    cout << &name << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
}
