#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    void emp();
};
void Employee::emp()
{
    int emp_id = 10;
    cout << emp_id << endl;
}

int main()
{
    Employee obj;
    obj.emp();
    return 0;
}