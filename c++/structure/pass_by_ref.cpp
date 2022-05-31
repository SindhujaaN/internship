#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNumber = 10;
    int secondNumber = 20;
    cout << "Before swap: " << endl;
    cout << firstNumber << " " << secondNumber << "\n";
    swap(firstNumber, secondNumber);
    cout << "After swap: " << endl;
    cout << firstNumber << " " << secondNumber << "\n";
    return 0;
}
