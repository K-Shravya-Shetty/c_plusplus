// recursion: When a function calls itself untill a specified condition is met
#include <bits/stdc++.h>
using namespace std;
// print the name n times using recursion
void  printName(int i, int n)
{
    if ( i > n)
    {
        return;
    }
    cout << "hello world"<<endl;
    printName(i + 1, n);
}
int main()
{
    int n;
    cout<<"enter the value of n ";
    cin >> n;
    printName(1, n);
    return 0;
}