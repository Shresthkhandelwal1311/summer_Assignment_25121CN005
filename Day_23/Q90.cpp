//Write a program to Find first repeating character. 
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
        if(freq[ch]==2){
            cout<<"First repeating character: "<<ch<<endl;
            return 0;
        }
    }
    cout<<"No repeating character found"<<endl;
    return 0;
}
