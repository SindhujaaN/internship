#include <iostream>
using namespace std;
void reverse_digit(int number)
{
    int reverse = 0, remainder;
    cout << "\nGiven number:" << number << endl;
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    cout << "Reversed Number: " << reverse << endl;
}
void swap(int &a, int &b)
{
    cout << "value before swap:"
         << "a:" << a << ""
         << "b:"
         << b << endl;

    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "value after swap:"
         << "a:" << a << " "
         << "b:" << b;
}
int main()
{
    int a = 5, b = 6, number = 1234;
    swap(a, b);
    reverse_digit(number);
    return 0;
}
