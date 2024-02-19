#include<iostream>
using namespace std;

int powNumber(int n, int pow){
    if(pow == 0){
        return 1;
    }
    return n*powNumber(n, pow-1);
}

int power(int a, int n){
    if(n == 0){
        return 1;
    }
    int subprob = power(a, n/2);
    int subprobsq = subprob *subprob;
    if(n&1){//n%2!=0
        return a*subprobsq;
    }else{
        return subprobsq;
    }

}


int main(){
    int n,pow;
    cin>>n>>pow;
    cout<<powNumber(n, pow)<<endl;
    cout<<power(n,pow);
    return 0;
}