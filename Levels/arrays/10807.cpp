#include <iostream>
#include <vector>
using namespace std;

int main(){

    int num;
    int searchnum;
    int result=0;
    vector<int> numVec;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        int var;
        cin>>var;
        numVec.push_back(var);
    } 

    cin>>searchnum;

    for(auto& no : numVec){
        if(no == searchnum) result++;
    }

    cout<<result<<endl;
}