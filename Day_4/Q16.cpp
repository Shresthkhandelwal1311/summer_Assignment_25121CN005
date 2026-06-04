//Write a program to Print Armstrong numbers in a range. 
#include <iostream>
using namespace std;
int main() {
    int ul,ll;
    cout << "Enter lower limit:";
    cin>>ll;
    cout << "Enter upper limit:";
    cin>>ul;
    cout << "Armstrong numbers: ";
    for (int i = ll; i <= ul; i++) {
        int x= i, sum = 0;
        while (x!= 0) {
            sum=sum+(x % 10)*(x % 10)*(x % 10);
            x/= 10;
        }
        if (sum == i)
            cout << i << " ";
    }
    return 0;
}



























