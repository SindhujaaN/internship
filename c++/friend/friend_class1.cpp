#include <iostream>
using namespace std;
class value
{
private:
    int a = 10, b = 20;

public:
    friend class number;
};
class number
{
public:
    int display(value obj)
    {
        cout << obj.a << endl;
        cout << obj.b << endl;
    }
};
int main()
{
    value obj;
    number obj2;
    cout << obj2.display(obj) << endl;
    return 0;
}