#include <iostream>
using namespace std;
class line
{
private:
    double length;

public:
    void set_length(double len);
    double get_length(void);
    line() // constructor
    {
        cout << "object is created" << endl;
    }
    ~line() // destructor
    {
        cout << "object is deleted" << endl;
    }
};
void line::set_length(double len)
{
    length = len;
}
double line::get_length(void)
{
    return length;
}

int main()
{
    line obj;
    obj.set_length(5.0);
    cout << "length:" << obj.get_length() << endl;
    return 0;
}