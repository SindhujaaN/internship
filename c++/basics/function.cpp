#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int num1 = 10, num2 = 20;
    int x = max(num1, num2);
    cout << "maximum value is:" << x << "\n";
    return 0;
}
