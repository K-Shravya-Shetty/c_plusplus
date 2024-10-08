// recursion: When a function calls itself untill a specified condition is met
#include <bits/stdc++.h>
using namespace std;
// print the name n times using recursion
void printName(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "hello world" << endl;
    printName(i + 1, n);
}
// print n numbers in the increasing order using recursion
void printinc(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    printinc(i + 1, n);
}
// print n numbers in the decreasing order sing recursion
void printdec(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printdec(i - 1, n);
}
// print n numbers in increasing order using backtracking method
void backprintinc(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    backprintinc(i - 1, n);
    cout << i << endl;
}
// print n numbers in decreasing order using backtracking method
void backprintdec(int i, int n)
{
    if (i > n)
    {
        return;
    }
    backprintdec(i + 1, n);
    cout << i << endl;
}
// print the sum of first n numbers using the parameter method
void printsum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    printsum(i - 1, sum + i);
}
// print the sum of first n numbers using the function method
int fun(int i)
{
    if (i == 0)
        return 0;
    return i + fun(i - 1);
}
// print the factorial of the number using the function method
int fact(int i)

{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    return i * fact(i - 1);
}

int main()
{
    // printName(1, n);
    // printinc(1,n);
    // printdec(n,n);
    // backprintinc(n,n);
    // backprintdec(1,n);
    // printsum(n,0);
    // cout<<fun(n);
    // cout << fact(n);
    return 0;
}