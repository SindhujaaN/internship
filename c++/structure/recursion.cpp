#include <iostream>
#include <string>
using namespace std;

int add(int num)
{
    if (num > 0)
    {
        return num + add(num - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = add(10);
    cout << result;
    return 0;
}