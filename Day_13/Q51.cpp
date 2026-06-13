//Write a program to Find largest and smallest element.
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
    int mx=arr[0];
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int mn=arr[0];
    for(int i=0;i<n;i++){
        mn=min(mn,arr[i]);
    }
    cout<<"largest element:"<<mx<<endl;
    cout<<"smallest element:"<<mn<<endl;
}