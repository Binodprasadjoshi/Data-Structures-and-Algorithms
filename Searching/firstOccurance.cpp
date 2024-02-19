// return index of first occurence of element in sorted array

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(x>arr[mid]){
            start=mid+1;
        }else if(x<arr[mid]){
            end=mid-1;
        }else{
            if(mid==0 || arr[mid]!=arr[mid-1]){
                return mid;
                cout<<"if";
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[5]={2,5,5,7,7};
    cout<<firstOcc(arr,5,5);
}