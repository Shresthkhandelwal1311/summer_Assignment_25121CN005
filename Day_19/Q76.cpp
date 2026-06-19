//Write a program to Find diagonal sum.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of square matrix:";
    cin>>n;
    int A[10][10];
    cout<<"enter elements of matrix:\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>A[i][j];
        int sum=0;
        for(int i=0;i<n;i++)
            sum=sum+A[i][i];
        cout<<"diagonal sum:"<<sum<<endl;
        return 0;
}