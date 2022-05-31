#include <iostream>
using namespace std;

void func(char *a)
{
    cout << "func() called" << a << endl;
}
void func(const char *a)
{
    cout << "const func() called" << a << endl;
}

int main()
{
    char *t = "GeeksforGeeks";
    func(t);
    return 0;
}