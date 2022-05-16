#include <iostream>
using namespace std;
class vehicle // base class
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
class fourwheeler : public vehicle // sub class derived from vehicle base class
{
public:
    fourwheeler()
    {
        cout << "Its a four wheeler" << endl;
    }
};
class car : public fourwheeler // sub class derived from baseclass fourwheeler
{
public:
    car()
    {
        cout << "Car color is red" << endl;
    }
};
int main()
{
    car obj;
    return 0;
}