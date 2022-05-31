#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream Mywritefile("sindhu.txt"); // creates a file
    Mywritefile << "I am Sindhujaa";    // writes to file
    Mywritefile.close();

    string myText;
    ifstream Myreadfile("sindhu.txt"); // reads a file
    while (getline(Myreadfile, myText))
    {
        // Output the text from the file
        cout << myText;
    }

    Myreadfile.close();
    return 0;
}