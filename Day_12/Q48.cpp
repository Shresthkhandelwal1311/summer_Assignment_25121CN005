//Write a program to Write function for perfect number. 
#include<iostream>
using namespace std;
void perfect(int n){
    int i,sum=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        cout<<n<<"is a perfect nummber";
    else
        cout<<n<<"is not a perfect number";
} 
int main(){
    int n;
    cout<<"enter a no.to checked:";
    cin>>n;
    perfect(n);
}