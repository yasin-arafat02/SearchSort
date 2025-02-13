#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]){
                cout<<"Pass >"<<endl;
                minIndex = j;
                for (int k = 0; k < n; k++) {
                    cout << arr[k] << " ";
                }
                cout<<endl;
            }
            }
        
        swap(arr[i], arr[minIndex]);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {5, 3, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: ";
    printArray(arr, n);
    selectionSort(arr, n);
    cout << "After sorting: ";
    printArray(arr, n);
}
