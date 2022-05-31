#include <iostream>
#include <string>
using namespace std;
class parent
{
public:
    string first_name = "sindhu";
    void name()
    {
        string sex = "female";
    }
};
class child : public parent
{
public:
    string last_name = "ragav";
};
int main()
{
    child obj;
    obj.name();
    cout << obj.first_name << " " << obj.last_name << endl;
    return 0;
}
