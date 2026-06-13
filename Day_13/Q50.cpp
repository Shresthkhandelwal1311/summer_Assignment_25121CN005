//Write a program to Find sum and average of array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    float avg=(float)sum/n;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
}