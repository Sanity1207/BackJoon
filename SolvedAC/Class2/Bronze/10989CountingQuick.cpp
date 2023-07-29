#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    int temp;
    cin>>n;
    vector<int> counting(100001,0);

    for(int i=0;i<n;i++){
        cin>>temp;
        counting[temp]++;
    }

    for(int i=1;i<10001;i++){
        for(int j=1;j<=counting[i];j++){
            cout<<i<<"\n";
        }
    }
}