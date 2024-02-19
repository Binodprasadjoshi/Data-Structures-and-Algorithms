// Given two arrays of amount of fuel required and fuel you get
// check starting from which point you can travel whole

#include<bits/stdc++.h>
using namespace std;

int circularTour(int dist[], int fuel[],int n){
    for(int start=0;start<n;start++){
        int end=start;
        int curr_fuel=0;
        while(true){
            curr_fuel=curr_fuel+(fuel[end]-dist[end]);
            if(curr_fuel<0){
                break;
            }
            end=(end+1)%n;            
            if(start==end){
                return start+1;                
            }            
        }
    }
    return -1;
}

int main(){
    int fuel[]={4,8,7,4};
    int dist[]={6,5,3,5};
    cout<<circularTour(dist,fuel,4);

    return 0;
}