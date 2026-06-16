// Write a program to find maximum frequency element.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxElement = arr[0], maxCount = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            maxElement = arr[i];
        }
    }
    cout << "element with maximum frequency is: " << maxElement << endl;
    cout << "its frequency is: " << maxCount;
}