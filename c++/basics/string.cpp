#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << "Entered string is:" << str << "\n";
    str.push_back('u');
    cout << "The string after push back is:" << str << "\n";
    str.pop_back();
    cout << "The string after pop back is:" << str << "\n";
    cout << "The capacity of string is:" << str.capacity() << "\n";
    cout << "The length of string is:" << str.length() << "\n";
    return 0;
}