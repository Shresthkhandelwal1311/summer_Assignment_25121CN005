//Write a program to Print reverse pyramid. 
//********* 
// ******* 
//  ***** 
//   *** 
//    * 

#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout<<"enter no.of rows:";
    cin>>n;
    int a=2*n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=a;j++){
            cout<<"*";
        }
        a=a-2;
        cout<<endl;
    }
    return 0;
}