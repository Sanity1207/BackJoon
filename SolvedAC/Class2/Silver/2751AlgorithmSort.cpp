#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> sortVec(n);

    for(int i=0;i<n;i++){
        cin>>sortVec[i];
    }

    sort(sortVec.begin(),sortVec.end());

    for(auto& a : sortVec){
        cout<<a<<"\n";
    }
}