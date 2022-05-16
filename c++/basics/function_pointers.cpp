#include <iostream>
using namespace std;
void func(int *ptr)
{
    *ptr = 20;
}
int main()
{
    int num1 = 10;
    func(&num1);
    cout << "value is:" << num1 << "\n";
    return 0;
}
