#include <iostream>

using namespace std;
void Test()
{

    static int x = 1;
    x = ++x;

    int y = 1;
    y = ++y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
int main()
{
    Test();
    Test();

    return 0;
}