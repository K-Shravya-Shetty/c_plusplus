#include <bits/stdc++.h>
using namespace std;
// left rotate the array by 1 bit
void left1bitrotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// left rotate the array by d bits
void leftRotate(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
    cout << "array after the left shift ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int d;
    cout << "enter the value of d: ";
    cin >> d;
    int arr[n];
    cout << "enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    left1bitrotate(arr, n);
    leftRotate(arr, n, d);
    return 0;
}