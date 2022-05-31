#include <iostream>
using namespace std;
class Test
{
public:
    void add(float a, float b)
    {
        cout << "Adding float" << endl;
    }
    void add(int a, int b)
    {
        cout << "Adding int" << endl;
    }
};
int main()
{
    Test obj;
    obj.add(3.1f, 3.2f);
    return 0;
}