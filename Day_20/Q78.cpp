//Write a program to Check symmetric matrix. 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of square matrix (n x n): ";
    cin>>n;
    int A[10][10];
    cout<<"Enter elements of matrix ("<<n<<"x"<<n<<"):\n";
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>A[i][j];
    bool isSymmetric=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]!=A[j][i]){
                isSymmetric=false;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }
    if(isSymmetric)
        cout<<"The matrix is symmetric.\n";
    else
        cout<<"The matrix is NOT symmetric.\n";
    return 0;
}