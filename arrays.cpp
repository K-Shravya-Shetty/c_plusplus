#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
void linearSearch(int arr[],int n,int d){
    for(int i=0;i<n;i++){
        if(arr[i]==d){
            cout<<"the number is found at the index "<<i;
        }
    }
}
void largestelem(int arr[],int n){
    int largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"the largest element is "<<largest;
}
void secondLargest(int arr[],int n){
    int largest=0;
    int slargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
    }
    cout<<"second largest element is "<<slargest;
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
    // int d;
    // cout<<"enter the value of d: ";
    // cin>>d;
    secondLargest(arr,n);
    //largestelem(arr,n);
    //linearSearch(arr,n,d);
    // leftRotate(arr,n,d);
    // cout<<"array after the left shift ";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}