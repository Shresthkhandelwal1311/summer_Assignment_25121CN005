//Write a program to Recursive Fibonacci. 
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) 
    return n;                             
    return fibonacci(n - 1) + fibonacci(n - 2);       
}
int main() {
    int num;
    cout << "enter a number: ";
    cin >> num;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}