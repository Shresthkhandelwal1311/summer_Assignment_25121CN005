//Write a program to Frequency of an element.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    int arr[n],key, count=0;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the no. whose frequency is to be find: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    if(count==0)
        cout<<"element not found";
    else
        cout<<"frequency of "<<key<<" is: "<<count;
}