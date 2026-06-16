//Write a program to Remove duplicates from array. 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "array after removing duplicates:";
    for(int i=0;i<n;i++){
        bool isDuplicate=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                isDuplicate=true;
                break;
            }
        }
        if(!isDuplicate){
            cout<<arr[i]<< " ";
        }
    }
}