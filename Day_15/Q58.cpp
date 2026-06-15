//Write a program to Rotate array left.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    int arr[n],i,first,p;
    cout<<"enter elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"original array is:";
    for(i=0;i<n;i++)
       cout<<arr[i]<<" ";
    cout<<"\nenter no. of position:";
    cin>>p;
    for(int j=1;j<=p;j++){
        first=arr[0];
        for(i=1;i<n;i++)
           arr[i-1]=arr[i];
        arr[n-1]=first;
    }
    cout<<"modified array is:";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}