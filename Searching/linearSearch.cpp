#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr,int key){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={2,4,56,9,71};
    cout<<linearSearch(arr,9);

}