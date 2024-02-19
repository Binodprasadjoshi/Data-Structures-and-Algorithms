#include<iostream>
using namespace std;

void rotateArray(int arr[], int n,int d){
    for(int j=0;j<d;j++){
        for(int i=0;i<n-1;i++){
            swap(arr[i],arr[i+1]);
        }
    }
}

void reverse(int arr[], int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotate(int arr[], int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    //rotateArray(arr, 5,2);
    rotate(arr,5,2);
    //reverse(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}