//Write a program to Remove spaces from string.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str,result;
    cout<<"Enter a string:";
    getline(cin,str);
    for(char ch:str){
        if(ch !=' '){
            result=result+ch;
        }
    }
    cout<<"String after removing spaces:"<<result;
    return 0;
} 