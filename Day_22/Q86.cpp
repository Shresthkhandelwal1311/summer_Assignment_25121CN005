//Write a program to Count words in a sentence.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence;
    int count = 0;
    cout<<"Enter a sentence:";
    getline(cin, sentence);
    bool inWord=false;
    for(char ch:sentence){
        if(ch != ' ' && !inWord){
            count++;
            inWord=true;
        }else if(ch==' '){
            inWord=false;
        }
    }
    cout<<"Number of words:"<<count<<endl;
    return 0;
} 