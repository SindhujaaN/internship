#include <iostream>
#include <string>
using namespace std;
class Emp
{
private:
    int salary;

public:
    void set_sal(int s)
    {
        salary = s;
    }
    int get_sal()
    {
        return salary;
    }
};
int main()
{
    Emp obj;
    obj.set_sal(50000);
    cout << obj.get_sal();
    return 0;
}