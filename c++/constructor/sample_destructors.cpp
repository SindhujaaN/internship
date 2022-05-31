#include <iostream>
using namespace std;
int i;
class destructor
{
public:
    destructor()
    {
        i = 10;
    }
    ~destructor()
    {
        i = 20;
    }
};
int &valueInitializer()
{
    i = 3;
    // destructor d1;
    return i;
}
int main()
{
    // cout << "i = " << valueInitializer() << endl;
    destructor d1;
    cout << "i = " << valueInitializer() << endl;
    return 0;
}