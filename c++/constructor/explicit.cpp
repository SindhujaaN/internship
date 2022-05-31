#include <iostream>
using namespace std;

class number
{
private:
    int value;

public:
    explicit number(int a) // constructor
    {
        value = a;
    }
    int getnum()
    {
        return value;
    }
};

void Ext_num(number num)
{
    int key = num.getnum();
}

int main()
{
    Ext_num(number(3));
}