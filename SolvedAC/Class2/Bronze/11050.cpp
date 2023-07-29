#include <iostream>
#include <vector>

using namespace std;

int binom(int n, int k);

vector<vector<int>> memo;
int main(){

    int n,k;
    cin>>n>>k;
    memo.resize(n+1,vector<int>(k+1,-1));

    cout<<binom(n,k);

}
int binom(int n, int k){
    if(n==k){
        return 1;
    }
    else if(k==1){
        return n;
    }
    else{
        if(memo[n][k] != -1){
            return memo[n][k];
        }
        memo[n][k] = binom(n-1,k-1) + binom(n-1,k);
        return memo[n][k];
    }
}