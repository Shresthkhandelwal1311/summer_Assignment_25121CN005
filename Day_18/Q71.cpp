//Write a program to Binary search. 
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;         
        else if (arr[mid] < key)
            low = mid + 1;       
        else
            high = mid - 1;      
    }
    return -1;                   
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cout << "Enter the number to search: ";
    cin >> key;
    int result = binarySearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result << " (position " << result + 1 << ")";
    else
        cout << "Element not found in the array";
    return 0;
}