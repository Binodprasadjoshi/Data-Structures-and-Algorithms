// An element in an array is a leader if all the elements 
// on right of that element are smaller.

#include<bits/stdc++.h>
using namespace std;

void leaders(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<arr[i]<<" ";
        }
    }
    return;
}

void printLeaders(vector<int> arr){
    int n=arr.size();
    int leader=arr[n-1];
    cout<<leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(leader<arr[i]){
            leader=arr[i];
            cout<<leader<<' ';
        }
    }
}

int main(){
    vector<int> arr={4,10,7,8,4,5,1};
    leaders(arr);
    printLeaders(arr);
    return 0;
}