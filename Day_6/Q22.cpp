//Write a program to Convert binary to decimal. 
#include<iostream>
using namespace std;
int main(){
    int n,r,ans=0,contri=1;
    cout<<"enter the binary no.:";
    cin>>n;
    while(n>0){
        r=n%10;
        if(r==1){
            ans+=contri;
        }
        n=n/10;
        contri*=2;

    }
    cout<<"decimal conversion is:"<<ans;
    return 0;
}