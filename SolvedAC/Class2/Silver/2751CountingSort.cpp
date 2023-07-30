#include <vector>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> count(2000001,0);

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        temp = temp + 1000000;
        count[temp]++;
    }

    for(int i=0;i<20000001;i++){
        while(count[i] > 0){
            cout<<i-1000000<<endl;
            count[i]--;
        }
    }
    
}