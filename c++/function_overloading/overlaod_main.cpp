#include <iostream>
using namespace std;
class Test
{
public:
    int main(int age)
    {
        cout << "Age:" << age << endl;
        return 0;
    }
    int main(string s)
    {
        cout << "name:" << s << endl;
        return 0;
    }
    int main(int a, int b)
    {
        int sum = a + b;
        cout << "sum:" << sum << endl;
        return 0;
    }
};

int main()
{
    Test obj;
    obj.main(30);
    obj.main("sindhu");
    obj.main(10, 20);

    return 0;
}