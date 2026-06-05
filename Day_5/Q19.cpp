//Write a program to Print factors of a number. 
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter a number:";
    cin>>n;
    cout<<"Prime factors of"<<n<<"are:";
    i=2;
    while(n>1){
        if(n%i==0){
        cout<<i<<" ";
        n=n/i;
        }
        else
           i++;
    }
    return 0;
}