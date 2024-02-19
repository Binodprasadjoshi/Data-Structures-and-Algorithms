#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 1 || n==0){
        return n;
    }
    
    int x = fibonacci(n-1)+fibonacci(n-2);
    //cout<<x<<" ";
    return x;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
}