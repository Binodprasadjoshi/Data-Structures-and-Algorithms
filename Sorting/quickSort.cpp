#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int i=s-1, j;
    int pivot = arr[e];
    
    for(j=s;j<e;j++){
        if(arr[j]<pivot){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[i+1], arr[e]);
    
    return i+1;
}

void quickSort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }
    int pivot = partition(arr, s, e);
    quickSort(arr,s,pivot-1);
    quickSort(arr,pivot+1, e);
    return;
}

int main(){
    vector<int> arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int s=0;
    int e=arr.size()-1;

    quickSort(arr, s, e);

    cout<<"Sorted array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}