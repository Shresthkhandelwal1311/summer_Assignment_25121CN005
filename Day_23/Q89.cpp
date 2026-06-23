//Write a program to Find first non-repeating character.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int freq[256]={0};
    for(char ch:str){
        freq[ch]++;
    }
    for(char ch:str){
        if(freq[ch]==1){
            cout<<"First non-repeating character: "<<ch<<endl;
            return 0;
        }
    }
    cout<<"No non-repeating character found"<<endl;
    return 0;
}