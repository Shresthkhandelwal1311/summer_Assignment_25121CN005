//Write a program to Write function to find factorial.
#include<iostream>
using namespace std;
void factorial(int i){
    int fac=1;
    while(i>=1){
        fac=fac*i;
        i--;
    }
    cout<<"the factorial of a entered number is:"<<fac;
}
int main(){
    int i;
    cout<<"enter the number:";
    cin>>i;
    factorial(i);
} 