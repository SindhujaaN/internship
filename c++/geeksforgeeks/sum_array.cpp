#include <iostream>
using namespace std;
int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int main()
{
    /*int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of given array is " << sum(arr, n);
    return 0;*/
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array value\t" << endl;
        cin >> a[i];
    }
    cout << "sum of array:" << sum(a, n);
}
