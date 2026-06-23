//Write a program to Find maximum occurring character.
#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cin>>str;
int freq[256]={0};
for(char ch:str)
freq[ch]++;
char maxChar=str[0];
int maxFreq=freq[str[0]];
for(int i=0;i<str.length();i++){
if(freq[str[i]]>maxFreq){
maxFreq=freq[str[i]];
maxChar=str[i];
}
}
cout<<"Maximum occurring character: "<<maxChar;
return 0;
} 