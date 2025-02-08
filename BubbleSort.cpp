// --------BubbleSort_______//
#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++){
            if (arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]);
                 swapped = true;
            }  
        }
        if(!swapped)
        break;
    }
}
void ArrayInput(int arr[],int n){
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    } 
}
void ArrayPrint(int arr[],int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    ArrayInput(arr,n);
    ArrayPrint(arr,n);
    BubbleSort(arr,n);
    cout<<"\n\n";
    ArrayPrint(arr,n);
}