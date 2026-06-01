//Write a program to Find factorial of a number.
#include<iostream>
using namespace std;
int main(){
    int i,fac=1;
    cout<<"enter the number:";
    cin>>i;
    while(i>=1){
        fac=fac*i;
        i--;
    }
    cout<<"the factorial of a entered number is:"<<fac;
    return 0;

}
