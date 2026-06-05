//Write a program to Check strong number.
#include<iostream>
using namespace std;
int main(){
    int n,f,rem,sum=0,x;
    cout<<"enter a no. to be cheked:";
    cin>>n;
    x=n;
    while(n>0){
        rem=n%10;
        f=1;
        for(int i=1;i<=rem;i++){
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(x==sum){
        cout<<"it is a strong number";
    }
    else{
        cout<<"it is not a strong number";
    }
    return 0;
}