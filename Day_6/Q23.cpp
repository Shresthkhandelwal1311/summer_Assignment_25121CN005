//Write a program to Count set bits in a number.
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int n,count=0;
    cout << "enter a number: ";
    cin >> n;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n = n / 2;
    }
    cout << "Set bits: " << count << endl;
    return 0;
}