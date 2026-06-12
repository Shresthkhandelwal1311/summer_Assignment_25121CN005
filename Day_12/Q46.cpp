//Write a program to Write function for Armstrong. 
#include<iostream>
#include<cmath>
using namespace std;
void armst(int i) {
    int x = i, sum = 0, digits = 0;
    int temp = i;
    while (temp > 0) {
        digits++;
        temp=temp/10;
    }
    temp = i;
    while (temp > 0) {
        sum=sum+ pow(temp % 10, digits);
        temp=temp/10;
    }
    if (sum == x)
        cout <<"Armstrong number";
    else
        cout<< "not an Armstrong number";
}
int main(){
    int i;
    cout<<"enter the no.:";
    cin>>i;
    armst(i);
}