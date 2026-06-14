// Write a program to Find duplicates in array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin >> n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool found=false;
    cout<<"duplicate elements are:";
    for(int i=0;i<n;i++){
        for(int j=i + 1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<< " ";
                found=true;
                break;
            }
        }
    }
    if(!found)
        cout<<"no duplicates found";
}