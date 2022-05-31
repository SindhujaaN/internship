#include <iostream>
using namespace std;
void search(int arr[], int n, int x, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
}
int main()
{
    int n = 4, x, k = 20;
    int a[] = {10, 20, 30, 40};
    search(a, n, x, k);
    return 0;
}
