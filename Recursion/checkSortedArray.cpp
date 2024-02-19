#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0 || n==1){
        return true;
    }

    return arr[0]<=arr[1] && isSorted(arr+1,n-1);
    return false;
}

bool isArraySorted(int arr[], int i, int n){
    if(i==n-1){
        return true;
    }
    return arr[i]<=arr[i+1] && isArraySorted(arr, i+1, n);
    return false;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<isSorted(arr,n)<<endl;
    cout<<isArraySorted(arr,0,n);
}
