//Write a program to Remove duplicate characters. 
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++){
        bool found = false;
        for (int j = 0; j < i; j++){
            if (str[i] == str[j]){
                found = true;
                break;
            }
        }
        if (!found)
            cout << str[i];
    }
    return 0;
}