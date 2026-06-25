//Write a program to Find common characters in strings.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1,str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    bool visited[256] = {false};  
    cout << "Common characters: ";
    for(int i = 0; i < str1.length(); i++){
        if(visited[(int)str1[i]])  
            continue;
        for(int j = 0; j < str2.length(); j++){
            if(str1[i] == str2[j]){
                cout << str1[i] << " ";
                visited[(int)str1[i]] = true;  
                break;
            }
        }
    }
    cout << endl;
    return 0;
}