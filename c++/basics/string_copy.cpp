#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "sindhujaa";
    string str2 = "ragav";
    string str3 = R"(sindhu \n ragav)";
    char ch[100];
    str1.copy(ch, 6, 1);
    cout << "copied character is:" << ch << "\n";
    cout << "first string:" << str1 << "\n";
    cout << "second string:" << str2 << "\n";
    str1.swap(str2);
    cout << "first string  after swap:" << str1 << "\n";
    cout << "second string after swap:" << str2 << "\n";
    cout << "Raw string:" << str3;
}