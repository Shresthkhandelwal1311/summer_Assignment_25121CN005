#include<iostream>
using nam#espace std;
int main(){
    int n,sum=0;
    cout<<"enter the number n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum"<<sum;
    return 0;
}
