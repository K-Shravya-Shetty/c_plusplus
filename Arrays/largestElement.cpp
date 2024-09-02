#include <bits/stdc++.h>
using namespace std;
void largestelem(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "the largest element is " << largest;
}
void secondLargest(int arr[], int n)
{
    int largest = 0;
    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
    }
    cout << "second largest element is " << slargest;
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    int arr[n];
    cout << "enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    secondLargest(arr, n);
    largestelem(arr, n);
    return 0;
}