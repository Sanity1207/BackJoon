#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arrVec;
    int ansMax = 0;

    for(int i=0;i<n;i++){//input 받기
        int temp;
        cin>>temp;
        if(temp<m){
            arrVec.push_back(temp);
        }
    }

    for(int i=0;i<arrVec.size();i++){
        for(int j=i+1;j<arrVec.size();j++){
            for(int k = j+1;k<arrVec.size();k++){
                // cout<<arrVec[i]<<" "<<arrVec[j]<<" "<<arrVec[k]<<" "<<endl;
                int temp = arrVec[i] + arrVec[j] + arrVec[k];
                if(temp>ansMax && temp<=m){
                    ansMax = temp;
                }
            }
        }
    }   
    cout<<ansMax<<endl;
}