//Write a program to Find row-wise sum.
#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows and columns of matrix:";
    cin>>r>>c;
    int A[10][10];
    cout<<"Enter elements of matrix ("<<r<<"x"<<c<<"):\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];
    cout<<"\nRow-wise sum:\n";
    for(int i=0;i<r;i++) {
        int sum=0;
        for(int j=0;j<c;j++){
            sum=sum+A[i][j];
        }
        cout<<"Sum of row"<<i+1<<"="<<sum<<endl;
    }
    return 0;
}