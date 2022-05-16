#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int countwords(string str2)
{
    stringstream str1(str2); // used for breaking words
    string word;             // to store individual words
    int count = 0;
    while (str1 >> word)
        count++;
    return count;
}
int main()
{
    string str1 = "sindhu ragav agilan shaarav";
    cout << "count of str1:" << countwords(str1);
}