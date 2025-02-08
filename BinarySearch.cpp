// -------BinarySearch-------//
#include <iostream>
using namespace std;
int BinarySearch(int arr[],int left,int right,int key){
    while (left<=right){
        int mid=left+(right-left)/2;
        if (arr[mid]==key){
           return mid;
        }
        if (arr[mid]>key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
void ArrayInput(int arr[],int n){
    cout<<"Enter Your Number : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    } 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int key;
    ArrayInput(arr,n);
    cout<<"Enter the number you want to search : ";
    cin>>key;
    int result = BinarySearch(arr,0,n-1,key);
    cout<<result+1<<endl;
}