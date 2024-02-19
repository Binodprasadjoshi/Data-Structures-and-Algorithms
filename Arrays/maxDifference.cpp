#include<iostream>
using namespace std;

int maxDifference(int arr[], int n){
    int diff=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(diff<(arr[j]-arr[i])){
                diff=arr[j]-arr[i];
            }
        }
    }
    return diff;
}

int difference(int arr[],int n){
    int diff=arr[1]-arr[0];
    int minval=arr[0];
    for(int i=1;i<n;i++){
        diff=max(diff,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    return diff;
}

int main(){
    int arr[5]={10,9,8,4,2};
    cout<<maxDifference(arr,5)<<endl;
    cout<<difference(arr,5);
}