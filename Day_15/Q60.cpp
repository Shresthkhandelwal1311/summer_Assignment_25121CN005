//Write a program to Move zeroes to end.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    int arr[n], i;
    cout<<"enter elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"original array is: ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    int count=0;
    int temp[n], k=0;
    for(i=0;i<n;i++){
        if(arr[i]==0) count++;
        else temp[k++]=arr[i];    
    }
    for(i=0;i<count;i++)
        temp[k++]=0;
    cout<<"\nmodified array is: ";
    for(i=0;i<n;i++)
        cout<<temp[i]<<" ";
    return 0;
}