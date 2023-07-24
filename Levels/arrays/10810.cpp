#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    vector<int> basketVec;

    cin>>n>>m;
    basketVec.resize(n,0);

    for(int i=0;i<m;i++){
        int startNum, finishNum, ballNum;
        cin>>startNum>>finishNum>>ballNum;

        for(int j=startNum-1;j<finishNum;j++){
            basketVec[j] = ballNum;
        }
    }

    for(auto a : basketVec){
        cout<<a<<" ";
    }
    cout<<"\n";
}