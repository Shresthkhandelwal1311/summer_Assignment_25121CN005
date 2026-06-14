//Write a program to Linear search. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    int arr[n],i,key,flag,pos;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter no. to be search:";
    cin>>key;
    flag=0;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            flag=1;
            pos=i+1;
            break;
        }
    }
    if(flag==0)
    cout<<"element not found:";
    else
    cout<<"element found at:"<<pos;
}