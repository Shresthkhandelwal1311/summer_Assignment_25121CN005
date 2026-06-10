//Write a program to Print character pyramid.
//    A 
//   ABA 
//  ABCBA 
// ABCDCBA 
//ABCDEDCBA 

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
            char ch=(char)(j+64);
            cout<<ch;
        }
        for(int k=1;k<=i-1;k++){
            char ch=(char)(b+64);
            cout<<ch;
            b--;
        }
        cout<<endl;
    }
}    
