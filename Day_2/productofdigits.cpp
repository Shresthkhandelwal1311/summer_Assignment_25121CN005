#include<iostream>
using namespace std;
int main(){
    int i,pro=1;
    cout<<"enter the no.:";
    cin>>i;
    while(i!=0){
        pro=pro*(i%10);
        i=i/10;
    }
    cout<<"product is:"<<pro;
    return 0;
}