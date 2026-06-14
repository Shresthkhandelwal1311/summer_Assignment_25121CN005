//Write a program to Second largest element. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=arr[0], max2=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    cout<<"Second Largest Element is:"<<max2;
}