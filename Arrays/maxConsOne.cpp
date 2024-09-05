//find the maximum consecutive ones in the given array
#include<bits/stdc++.h>
using namespace std;
int maxOnes(int arr[],int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"enter the number of elements in the array :";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxOnes(arr,n);
}
