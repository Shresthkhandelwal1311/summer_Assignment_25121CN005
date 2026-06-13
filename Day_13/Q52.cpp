//Write a program to Count even and odd elements.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        even=even+1;
        else 
        odd=odd+1;
    }
    cout<<"Even element:"<<even<<endl;
    cout<<"Odd element:"<<odd<<endl;
} 