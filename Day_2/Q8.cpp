//Write a program to Check whether a number is palindrome. 
#include<iostream>
using namespace std;
int main(){
    int i,n,rev=0;
    cout<<"enter the no.:";
    cin>>i;
    n=i;
    while(i>0){
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(rev==n){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
