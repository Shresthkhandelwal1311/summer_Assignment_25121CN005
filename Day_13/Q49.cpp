//Write a program to Input and display array. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}