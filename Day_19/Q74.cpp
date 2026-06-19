//Write a program to Subtract matrices.
#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"enter number of rows and columns:";
    cin>>rows>>cols;
    int A[10][10],B[10][10],C[10][10];
    cout<<"enter elements of first matrix:\n";
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin>>A[i][j];
        cout<<"enter elements of second matrix:\n";
        for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin>>B[i][j];
        for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            C[i][j]=A[i][j]-B[i][j];
        cout<<"difference of matrices:\n";
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            cout<<C[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}