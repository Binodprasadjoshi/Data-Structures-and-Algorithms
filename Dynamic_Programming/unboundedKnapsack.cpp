//repetions of items is allowed
#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int>& wts, vector<int>& prices, int n, int w){

    if(n==0 || w==0){
        return 0;
    }

    int inc = 0;
    int exc = 0;
    if(wts[n-1] <= w){
        inc = prices[n-1] + knapsack(wts, prices, n, w-wts[n-1]);
    }
    exc = knapsack(wts, prices, n-1, w);
    return max(inc, exc);
}


//Iterative (Bottom up) Approach 
int knapsack2(vector<int>& wts, vector<int>& prices, int N, int W){
    vector<vector<int>> dp(N+1, vector<int>(W+1, 0));

    for(int n=1; n<=N; n++){
        for(int w=1; w<=W; w++){
            int inc = 0;
            int exc = 0;
            if(wts[n-1] <= w){
                inc = prices[n-1] + dp[n][w - wts[n-1]];
            }
            exc = dp[n-1][w];
            dp[n][w] = max(inc, exc);
            
        }
    }

    return dp[N][W];
}


int main(){
    vector<int> wts{3,4,2,7};
    vector<int> prices{20,10,5,20};

    int abc = knapsack(wts, prices, 4, 7);
    cout<<"Solution = "<<abc<<endl;
    cout<<"Solution2 = "<<knapsack2(wts, prices, 4,7);

    return 0;
}