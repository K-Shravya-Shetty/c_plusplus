#include<bits/stdc++.h>
using namespace std;
void unionOp(int a1[],int a2[],int n1, int n2){
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(a2[i]);
    }
    int unionarr[st.size()];
    int i=0;
    for(auto it:st){
        unionarr[i++]=it;
    }
    cout<<"the array after union :";
    for(int i=0;i<st.size();i++){
        cout<<unionarr[i]<<" ";
    }
}
int main(){
    int n1;
    cout<<"Enter the size of the first array";
    cin>>n1;
    int n2;
    cout<<"Enter the size of the second array";
    cin>>n2;
    int a1[n1];
    int a2[n2];
    cout<<"enter the elements of the array 1 :";
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cout<<"Enter the elements of the array 2 :";
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    unionOp(a1,a2,n1,n2);
}