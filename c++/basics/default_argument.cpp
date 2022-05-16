#include <iostream>
using namespace std;

int add(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}
int main()
{
    cout << "Addition of a,b:" << add(10, 15) << endl;
    cout << "Addition of a,b,c:" << add(10, 15, 25) << endl;
    cout << "Addition of a,b,c,d:" << add(10, 15, 25, 30) << endl;
}