#include<bits/stdc++.h>
using namespace std;

int firstOcccurence(int arr[], int n, int i, int k){
    if(arr[i]==k){
        return i;
    }
    if(i==n){
        return -1;
    }
    firstOcccurence(arr,n,i+1,k);
    return -1;
}

int main(){
    int arr[]  = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    cout<<firstOcccurence(arr,n,0,7);
}
