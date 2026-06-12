//Write a program to Write function for palindrome.
#include<iostream>
using namespace std;
void palin(int i){
    int n,rev=0;
    n=i;
    while(i>0){
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(rev==n){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    
}
int main(){
    int i;
    cout<<"enter the no.:";
    cin>>i;
    palin(i);
} 