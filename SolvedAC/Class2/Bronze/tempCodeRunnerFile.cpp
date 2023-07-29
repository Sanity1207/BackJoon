#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arrVec;
    int ansMax;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp<m){
            arrVec.push_back(temp);
        }
    }

    for(int i=0;i<arrVec.size();i++){
        for(int j=i+1;j<arrVec.size();j++){
            for(int k = j+1;k<arrVec.size();k++){
                int temp = arrVec[i] + arrVec[j] + arrVec[k];
                if(temp<m && temp>ansMax){
                    ansMax = temp;
                }
            }
        }
    }   
    cout<<ansMax<<endl;
}