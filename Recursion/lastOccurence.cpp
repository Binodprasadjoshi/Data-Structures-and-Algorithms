#include<bits/stdc++.h>
using namespace std;

int lastOcc(int arr[], int n, int key){
    if(n==0){
        return -1;
    }
    int index = lastOcc(arr+1,n-1,key);   
    if(index==-1){
        if(arr[0]==key)
            return 0;
        else
            return -1;
    }
    if(index != -1){
        return index += 1;
    }
    return -1;
}

// int lastOccurence(int arr[], int n, int i, int key){
//     if(i==n){
//         return -1;
//     }
//     lastOccurence(arr, n, i+1, key);
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }

int main(){
    int arr[] = {1,2,3,4,5,6,3,7};
    int n = sizeof(arr)/sizeof(int);
    cout<<lastOcc(arr,n,3)<<endl;

}