#include<bits/stdc++.h>
using namespace std;

//Simple Solution   time complexity=O(n^2)
void maxOfSubarray(int arr[], int n,int k){
    int mx;
    for(int i=0;i<n-k+1;i++){
        mx=arr[i];
        for(int j=i+1;j<i+k;j++){
            if(arr[j]>mx){
                mx=arr[j];
            }
           // mx=max(mx,arr[j]);
        }
        cout<<mx<<" ";
    }
}

//Efficient solution using Dequeue
void maxSubarray(int arr[],int n,int k){
    deque<int> dq;
    for(int i=0;i<k;i++){
        while(!dq.empty()&& arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";
}

int main(){
    int arr[7]={10,8,5,12,15,7,6};
    maxOfSubarray(arr,7,3);
    cout<<endl;
    maxSubarray(arr,7,3);

    return 0;
}