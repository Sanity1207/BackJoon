#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> basketVec;

    for(int i=1;i<=n;i++){
        basketVec.push_back(i);
    }

    for(int i=0;i<m;i++){
        int startIdx, endIdx;
        cin>>startIdx>>endIdx;
        startIdx--;
        endIdx--;

        for(int j=0;j<=(endIdx-startIdx-1)/2;j++){
            int temp;
            temp = basketVec[startIdx+j];
            basketVec[startIdx+j] = basketVec[endIdx-j];
            basketVec[endIdx-j] = temp;
        }
    }

    for(auto& a : basketVec){
        cout<<a<<" ";
    }
}