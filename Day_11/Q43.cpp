//Write a program to Write function to check prime.
#include <iostream>
using namespace std;
void prime(int n) {
    bool flag = true;
    if (n <= 1) {
        cout << "The number is neither prime nor composite";
        
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
    
}
int main(){
    int n;
    cout<<"enter a no, to be checked:";
    cin>>n;
    prime(n);
} 