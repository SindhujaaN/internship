#include <iostream>
using namespace std;
int func()
{
    const char *array[4] = {"red", "green", "yellow", "orange"};
    int a[4] = {10, 20, 30, 40};
    int *ptr;
    ptr = a;
    for (int i = 0; i < 4; i++)
    {
        cout << "List of colors in the array is:" << array[i] << "\n";
        cout << "value:" << *ptr << endl;
        cout << "Address:" << ptr << endl;
        ptr++;
    }
}
int main()
{
    func();
    return 0;
}