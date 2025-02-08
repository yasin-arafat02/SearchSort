#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  // Start from the second element
        int key = arr[i];          // Pick the element to be placed correctly
        int j = i - 1;

        // Move elements of arr[0..i-1] greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key at its correct position
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

    insertionSort(arr, n);

    cout << "After sorting: ";
    printArray(arr, n);

    return 0;
}
