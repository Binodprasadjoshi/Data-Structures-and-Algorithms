#include<iostream>
using namespace std;

int search(int arr[],int x){
    int i=0;
    while(true){
        if(arr[i]==x)
            return i;
        if(arr[i]>x)
            return -1;
        
        i++;
    }
}

int binarySearch(int arr[],int x,int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}

//unbounded binary search
int binaryInfiniteSearch(int arr[],int x){
    if(arr[0]==x)
        return 0;
    int i=1;
    while(arr[i]<x){
        i=i*2;
    }
    if(arr[i]==x)
        return i;
    
    return binarySearch(arr,x,(i/2)+1,i-1);
    
}

int main(){
    int arr[10]={2,5,8,10,45,67,100,200};
    cout<<search(arr,45)<<endl;;
    cout<<binaryInfiniteSearch(arr,10);
    //cout<< binarySearch(arr,45,0,10);
}