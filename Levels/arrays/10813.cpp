#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> baskets;
    for(int i=0;i<=n;i++){
        baskets.push_back(i);
    }

    for(int i=0;i<m;i++){
        int start,end,temp;
        cin>>start>>end;

        temp = baskets[start];
        baskets[start] = baskets[end];
        baskets[end] = temp;
    }

    for(auto a : baskets){
        if(a == 0) continue;
        cout<<a<<" ";
    }
    
}
