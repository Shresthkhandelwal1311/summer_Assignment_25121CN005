//Write a program to Find missing number in array.
#include <iostream>
using namespace std;
int findMissing(int arr[],int n){
    int total=(n + 1)*(n + 2)/2;
    int sum=0;
    for(int i=0;i<n;i++) 
    sum+=arr[i];
    return total - sum;
}
int main() {
    int arr[]={1, 2, 4, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Missing number:"<<findMissing(arr, n)<<endl;
    return 0;
}