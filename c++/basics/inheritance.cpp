#include <iostream>
using namespace std;
class parent
{
public:
    int id_p;
};
class child : public parent // sub class from base class(parent)
{
public:
    int id_c;
};

int main()
{
    child obj;
    obj.id_c = 12;
    obj.id_p = 20;
    cout << "child id:" << obj.id_c << endl;
    cout << "parent id:" << obj.id_p << endl;
    return 0;
}