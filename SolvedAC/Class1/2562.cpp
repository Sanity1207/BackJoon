#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    int maxnum = 0;
    int maxidx = 0;

    vector<int> numVec;
    for(int i=0;i<9;i++){
        cin>>num;
        numVec.push_back(num);
    }

    for(int i=0;i<9;i++){
        if(numVec[i]>maxnum){
            maxnum = numVec[i];
            maxidx = i+1;
        }
    }

    cout<<maxnum<<endl;
    cout<<maxidx<<endl;
}