//Write a program to Selection sort. 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements:";
    cin>>n;
    int a[n],i,j,t,minIdx;
    cout<<"enter elements:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Original array is:";
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl;
    for(i=0;i<n-1;i++){
        minIdx=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[minIdx])
                minIdx=j;
        }
        if(minIdx!=i){
            t=a[i];
            a[i]=a[minIdx];
            a[minIdx]=t;
        }
    }
    cout<<"Sorted array is:";
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}