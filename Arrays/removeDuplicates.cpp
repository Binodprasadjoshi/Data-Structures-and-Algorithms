#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int result=1;
    for(int i=0;i<n;i++){
        if(arr[result-1]!=arr[i]){
            arr[result]=arr[i];
            result++;
        }
    }
    return result;
}

int main(){
    int arr[10]={5,5,23,35,35,35,40,55,55};
    int n=removeDuplicates(arr,9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}