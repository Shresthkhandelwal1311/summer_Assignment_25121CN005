//Write a program to Count digits in a number. 
#include<iostream>
using namespace std;
int main(){
    int n,d=0;
    cout<<"enter the number:";
    cin>>n;
    while(n!=0){
        n=n/10;
        d++;
    }
    cout<<"total number of digits are:"<<d;
    return 0;
}
