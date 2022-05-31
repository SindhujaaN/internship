#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Constructor called" << endl;
    }

private:
    ~A()
    {
        cout << "deleted constructor" << endl;
    }
    friend void destruct(A *);
};
void destruct(A *ptr)
{
    delete ptr;
}
int main()
{
    A *ptr = new A;
    destruct(ptr);
    return 0;
}
