#include <iostream>
using namespace std;
class Addition
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Addition obj;
    cout << "sum of 2 numbers:" << obj.sum(10, 20) << endl;
    cout << "sum of 3 numbers:" << obj.sum(10, 20, 30) << endl;
    return 0;
}