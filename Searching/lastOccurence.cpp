// return index of last occurence of element in sorted array
#include<iostream>
using namespace std;

int lastOccurence(int arr[], int n,int x, int low, int high){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(x>arr[mid]){
        return lastOccurence(arr,n,x,mid+1,high);
    }else if(x<arr[mid]){
        return lastOccurence(arr,n,x,low,mid-1);
    }else{
        if(arr[mid]!=arr[mid+1] || mid==n-1){
            return mid;
        }else{
            return lastOccurence(arr,n,x,mid+1,high);
        }
    }
}

int main(){
    int arr[5]={2,5,5,6,7};
    cout<<lastOccurence(arr,5,7,0,5);
}