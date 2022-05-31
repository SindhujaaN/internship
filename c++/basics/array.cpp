#include <iostream>
using namespace std;

void func(int array[3])
{
    for (int i = 0; i < 3; i++)
        cout << array[i] << endl;
}
int main()
{
    int array[3] = {10, 20, 30};
    func(array);
    return 0;
}
