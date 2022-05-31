#include <iostream>
using namespace std;
class Point
{
public:
    int x;
    int *y;

public:
    Point(int x1, int y1) // constructor
    {
        x = x1;
        y = new int();
        *y = y1;
    }
    Point(const Point &p1) // Copy constructor
    {

        x = p1.x;
        y = new int();
        *y = *(p1.y);
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return *y;
    }
};
int main()
{
    Point p1(10, 20);
    Point p2(p1);
    cout << "\np1.x = " << p1.getX() << endl;
    cout << "\np2.x = " << p2.getX() << endl;
    cout << "\np1.y = " << p1.getY() << endl;
    cout << "\np2.y = " << p2.getY() << endl;
    return 0;
}