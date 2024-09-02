#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[],int n,int d){
    for(int i=0;i<n;i++){
        if(arr[i]==d){
            cout<<"the number is found at the index "<<i;
        }
    }
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    linearSearch(arr,n,d);
}