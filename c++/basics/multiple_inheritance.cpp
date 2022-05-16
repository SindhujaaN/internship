#include <iostream>
using namespace std;
class vehicle // 1st base class
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
class fourwheeler // seconf base class
{
public:
    fourwheeler()
    {
        cout << "Its a four wheeler" << endl;
    }
};
class car : public vehicle, public fourwheeler // sub class derived from 2 base classes
{
};
int main()
{
    car obj;
    return 0;
}