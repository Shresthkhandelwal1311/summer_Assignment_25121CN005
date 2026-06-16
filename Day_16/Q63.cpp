//Write a program to Find pair with given sum.
#include<iostream>
using namespace std;
int main(){
    int n, sum;
    cout<<"enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target sum: ";
    cin>>sum;
    bool found = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"pair found: "<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<endl;
                found = true;
            }
        }
    }
    if(!found)
        cout<<"no pair found with given sum";
    return 0;
}