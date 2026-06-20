//Write a program to Find column-wise sum.
#include <iostream>
using namespace std;
int main() {
    int r,c;
    cout<<"Enter rows and columns of matrix:";
    cin>>r>>c;
    int A[10][10];
    cout<<"Enter elements of matrix ("<<r<<"x"<<c<<"):\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>A[i][j];
    cout<<"\nColumn-wise sum:\n";
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
            sum=sum+A[i][j];
        }
        cout<<"Sum of column"<<j+1<<"="<<sum<<endl;
    }
    return 0;
}