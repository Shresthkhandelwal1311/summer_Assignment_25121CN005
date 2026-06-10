//Write a program to Print number pyramid. 
//    1 
//   121 
//  12321 
// 1234321 
//123454321 

#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout<<"enter no.of rows:";
    cin>>n;
    int a=n-1;
    for(int i=1;i<=n;i++){
        int b=i-1;
        for(int q=1;q<=a;q++){
            cout<<" ";
        }
        a--;
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=i-1;k++){
            cout<<b;
            b--;
        }
        cout<<endl;
    }
}    