//Write a program to Print prime numbers in a range. 
#include <iostream>
using namespace std;

int main() {
    int ul,ll;
    cout << "Enter the upper limit number: ";
    cin >>ul;
    cout << "Enter the lower limitnumber: ";
    cin >>ll;
    cout << "Prime numbers are:\n";
    for (int n =ul; n<=ll; n++) {
        if (n <= 1)
            continue;
        bool flag = true;
        for (int i = 2; i<= n/2; i++) {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << n << " ";
    }
    return 0;
}
