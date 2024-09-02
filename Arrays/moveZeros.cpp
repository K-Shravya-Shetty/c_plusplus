#include <bits/stdc++.h>
using namespace std;
int moveZeros(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout << "array after moving the zeros :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return j;
}
int main()
{
    int n;
    cout << "enter the value of n :";
    cin >> n;
    int arr[n];
    cout << "enter the array elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveZeros(arr, n);
}