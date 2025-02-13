#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                cout << "Array after swap: ";
                for (int k = 0; k < n; k++) {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
        if (!swapped)
            break;
    }
}

void ArrayInput(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void ArrayPrint(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    ArrayInput(arr, n);
    cout << "Before Sorting: ";
    ArrayPrint(arr, n);
    BubbleSort(arr, n);
    cout << "After Sorting: ";
    ArrayPrint(arr, n);
    return 0;
}
