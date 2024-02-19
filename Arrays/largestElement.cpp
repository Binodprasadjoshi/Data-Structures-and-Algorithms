#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr){
    int n=arr.size();
    int large=0;
    for(int i=0;i<n;i++){
        if(arr[large]<arr[i]){
            large=i;
        }
    }
    return large;
}

int main(){
    vector<int> arr={10,2,100,6,2,20};
    cout<<arr[largestElement(arr)];
}