// --------insertionSort-------//
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void ArrayInput(int arr[],int n){
    cout<<"Enter Your Number : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    } 
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    ArrayInput(arr,n);
    cout << "Before sorting: ";
    printArray(arr, n);
    insertionSort(arr, n);
    cout << "After sorting: ";
    printArray(arr, n);
    return 0;
}
