#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr){
    int n=arr.size();
    int large=0;
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[large]){
            second=large;
            large=i;
        }
        else if(arr[i]<arr[large]){
            if(second==-1 || arr[i]>arr[second]){
                second=i;
            }
        }
        
    }
    return second;
}

int main(){
    vector<int> arr={9,5,9};
    cout<<arr[secondLargest(arr)];
}