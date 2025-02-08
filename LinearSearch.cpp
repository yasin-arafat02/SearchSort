// _______LinearSearch_______//
#include <iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++){
        if(arr[i]==key){
            return i+1;

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
    int n,key;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    ArrayInput(arr,n);
    cout<<"Searching Number : ";
    cin>>key;
    int result = LinearSearch(arr,n,key);
    if (result != -1)
    {
        cout<<"Key is avilable"<<result<<endl;
    }
    else{
        cout<<"Key is not avilable"<<endl;
    }
    
}