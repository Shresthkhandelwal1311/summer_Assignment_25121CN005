//Write a program to Check perfect number.
#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"enter a no.to checked:";
    cin>>n;
    for(i=1;i<=n/2;i++){
        if(n%2==0)
            sum=sum+i;
    }
    if(sum==n)
        cout<<n<<"is a perfect nummber";
    else
        cout<<n<<"is not a perfect number";
    return 0;
} 