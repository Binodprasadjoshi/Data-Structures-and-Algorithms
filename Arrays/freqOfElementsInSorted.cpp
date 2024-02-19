#include<iostream>
using namespace std;

void frequency(int arr[],int n){
    int freq=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            freq++;
        }
        if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<" -> "<<freq<<endl;
            freq=1;
        }
    }
    return;
}

int main(){
    int arr[10]={5,5,6,7};
    frequency(arr,4);
}