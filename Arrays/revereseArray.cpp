#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int end=n-1;
    int start=0;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    return;
}

int main(){
    int arr[5];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    reverse(arr,5);
    cout<<"Reversed array is: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}