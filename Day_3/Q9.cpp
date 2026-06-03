//Write a program to Check whether a number is prime.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;
    bool flag = true;
    if (n <= 1) {
        cout << "The number is neither prime nor composite";
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "The number is prime";
    else
        cout << "The number is composite";
    return 0;
}
