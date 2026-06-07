//Write a program to Recursive reverse number.
#include <iostream>
using namespace std;
int reverse(int n) {
    if (n == 0) return 0;   
    cout << n % 10;        
    reverse(n / 10);      
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed = ";
    reverse(num);
}