#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num;
    int x;
    int var;

    vector<int> input;
    vector<int> output;

    cin>>num;
    cin>>x;

    for(int i=0;i<num;i++){
        cin>>var;
        input.push_back(var);
    }

    for(auto& temp : input){
        if(temp<x) output.push_back(temp);
    } 

    for(auto& temp : output){
        cout<<temp<<" ";
    }
}