#include<iostream>
using namespace std;

void moveZeros(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[j],arr[i]);
                    break;
                }
            }
        }
    }
    return;
}

void zerosToLast(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[count],arr[i]);
            count++;
        }
    }
    return;
}


int main(){
    int arr[10]={0,5,0,10,11,0,15,0,0,22};
    moveZeros(arr,10);
    //zerosToLast(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}