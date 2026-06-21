//Write a program to Count vowels and consonants. 
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int vowels=0,consonants=0;
    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else if(ch>='a'&&ch<='z'){
            consonants++;
        }
    }
    cout<<"Vowels:"<<vowels<<endl;
    cout<<"Consonants:"<<consonants<<endl;
    return 0;
}