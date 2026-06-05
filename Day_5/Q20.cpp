//Write a program to Find largest prime factor. 
#include<iostream>
using namespace std;
int main(){
    int n, largest = -1;
    cout << "enter a number: ";
    cin >> n;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            largest = i;
            n = n / i;
        }
    }
    cout << "largest prime factor is: " << largest << endl;
    return 0;
}