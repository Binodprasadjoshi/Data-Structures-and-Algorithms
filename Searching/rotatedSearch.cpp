#include<bits/stdc++.h>
using namespace std;

int rotatedSearch(vector<int> arr, int k){
    int high = arr.size()-1;
    int low = 0;
    int mid;
    while(low < high){
        mid = (high + low)/2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            if(k<arr[mid] && k>arr[low]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        else{
            if(k>arr[mid] && (k<arr[high])){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr {5,6,7,1,2,3,4};
    // for(int x: arr){
    //     cout<<x<<" ";
    // }
    cout<<rotatedSearch(arr,2);
}