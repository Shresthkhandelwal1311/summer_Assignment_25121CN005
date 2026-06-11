//Write a program to Write function to find maximum.
#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b)
      return a;
    else
      return b;
}
int main(){
    int a,b;
    cout<<"enter first no.:";
    cin>>a;
    cout<<"enter second no.:";
    cin>>b;
    cout<<max(a,b);
}