#include<bits/stdc++.h>
using namespace std;


//Using Loop
int binarySearch(vector<int> arr, int key){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}


//Using Recursion
int binary(vector<int> arr,int key,int start,int end){
    int mid=(start+end)/2;
    if(start>end)   return -1;
    if(key==arr[mid]){
        return mid;
    }else if(key>arr[mid]){
        return binary(arr,key,mid+1,end);
    }else{
        return binary(arr,key,0,mid-1);
    }
}

int main(){
    vector<int> arr={2,4,10,12,45};
    cout<<binarySearch(arr,2)<<endl;;
    cout<<binary(arr,55,0,arr.size());

}