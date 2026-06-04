//Write a program to Find nth Fibonacci term.
#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1, c;
    cout << "Enter term number: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << "Term " << n << " = " << a << endl;
    return 0;
}