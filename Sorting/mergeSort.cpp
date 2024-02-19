#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e){
    vector<int> temp;
    int i=s;
    int mid = (s+e)/2;
    int j = mid+1;

    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
            //i++;
        }else{
            temp.push_back(arr[j++]);
            //j++;
        }
    }
    // copying remaining elements of array
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }

    //copy elements from temp to arr
    int k=0;
    
    for(int a=s;a<=e;a++){
        arr[a] = temp[k++];
    }

    return;

}

void mergeSort(vector<int> &arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2; 
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    return merge(arr, s, e);

}


int main(){
    vector<int> arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int s=0;
    int e=arr.size()-1;

    mergeSort(arr, s, e);

    cout<<"Sorted array: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}