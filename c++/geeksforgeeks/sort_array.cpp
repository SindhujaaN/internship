#include <iostream>
#include <bits\stdc++.h>
using namespace std;
void sortArray(int, int);
void sortArray(int a[], int n)
{
    sort(a, a + n);
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {9, 3, 7, 1};
    sortArray(a, 4);
    printArray(a, 4);
    return 0;
}