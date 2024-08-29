#include<bits/stdc++.h>
using namespace std;
//extracting all the digits from the number
void extract(int num){
    int lsdig;
    while(num>0){
        lsdig=num%10;
        cout<<lsdig;
        cout<<endl;
        num=num/10;
    }
}

//counting the number of digits in the number
void count_dig(int num){
    int cnt=0;
    int lsdig;
    while(num>0){
        lsdig=num%10;
        cnt++;
        num=num/10;
    }
    cout<<cnt;
}

//reverse the give number
void rev_num(int num){
    int lsdig;
    int reversed=0;
    while(num>0){
        lsdig=num%10;
        num=num/10;
        reversed=(reversed*10)+lsdig;
    }
    cout<<reversed;
}
//check the number is a palindrome or not
void palindrome(int num){
    int temp =num;
    int rev_num=0;
    while(num>0){
        int lsdig;
        lsdig=num%10;
        num=num/10;
        rev_num=(rev_num*10)+lsdig;
    }
    if(temp==rev_num){
        cout<<"the number is palindrome";
    }
    else{
        cout<<"the number is not a palindrome ";
    }
}
//swapping two numbers
void swapnum(int a ,int b){
    int temp;
    temp =b;
    b=a;
    a=temp;
    cout<<a<<endl;
    cout<<b;
}
//checking the number is prime or not
void check_prime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count=count+1;
        }
    }
    if(count==2){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
}
//check the number is a armstrong number
//armstrong number is a number that is equal to the sum of its digits raised to the power of the number of digits
void armstrong_num(int num){
    int cnum=num;
    int sum=0;
    while(num>0){
        int ls=num%10;
        num=num/10;
        sum=sum+(ls*ls*ls);
    }
    if(cnum==sum){
        cout<<"the number is an armstrong number";
    }
    else{
        cout<<"the number is not an armstrong number";
    }
}
//this is another way of checking if the number is prime or not by doing some mathematicl observations.
//in this method we just loop till the square root of the number and find if its a prime number or not.
void prime(int num){
    int cnum=num;
    int c=0;
    for(int i=1;i*i<num;i++){
        if(num%i==0){
            c++;
            if(num/i!=i){
                c++;
            }
        }
    }
    if(c==2){
        cout<<"the number "<<cnum<<" is prime";
    }
    else{
        cout<<"the number "<<cnum<< "is not prime";
    }
}
int main(){
    //extract(1267);
    //count_dig(98873);
    //rev_num(7654);
    //palindrome(121);
    //palindrome(123);
    //swapnum(4,5);
    //check_prime(4);
    //check_prime(7);
    //armstrong_num(35);
    //prime(45);
    //prime(101);
}