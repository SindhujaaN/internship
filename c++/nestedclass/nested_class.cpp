#include <iostream>
using namespace std;
class X
{
public:
    class Y
    {
    private:
        int a;

    public:
        void get_data(int x)
        {
            a = x;
        }
        void put_data()
        {
            cout << "value of a:" << a << endl;
        }
    };
};
int main()
{
    X ::Y obj;
    obj.get_data(10);
    obj.put_data();
    return 0;
}