//Write a program to Check Armstrong number.
#include<iostream>
using namespace std;
int main(){
    int i,x,sum=0;
    cout<<"Enter the number to be checked:";
    cin>>i;
    x=i;
    while(i>0){
        sum=sum+(i%10)*(i%10)*(i%10);
        i=i/10;
    }
    if(sum==x){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }
    return 0;

}