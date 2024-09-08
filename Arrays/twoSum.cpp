#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    sort(arr[0],arr[n-1]);
    while(left<right){
        int add=arr[left]+arr[right];
        if(add==target){
            return left,right;
        }
        else if(add<target){
            left++;
        }
        else{
            right--;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target value :";
    cin>>target;
    sum(arr,n,target);
    cout<<sum;
}