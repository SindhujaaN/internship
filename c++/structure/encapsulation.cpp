#include <iostream>
using namespace std;
class Addition
{

public:
    Addition(int i = 0) // constructor
    {
        total = i;
    }
    int add(int num)
    {
        total += num;
    }
    int get_total()
    {
        return total;
    };

private:
    int total;
};
int main()
{
    Addition obj;
    obj.add(10);
    obj.add(20);
    obj.add(30);
    cout << "Total:" << obj.get_total() << endl;
    return 0;
}