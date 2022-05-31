#include <iostream>
using namespace std;

void sort_array(int, int);
void print_array(int, int);
void sort_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)

        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "";
    }
}

int main()
{
    int a[4] = {9, 2, 8, 4};
    int n = 4;
    sort_array(a, n);
    print_array(a, n);
    return 0;
}