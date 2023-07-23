#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> rolls;
    rolls.resize(3,0);

    cin>>rolls[0]>>rolls[1]>>rolls[2];
    int prize;

    if(rolls[0]==rolls[1] && rolls[1] == rolls[2]){//모두 같음
        prize = 10000 + rolls[0]*1000;
    }
    else if (rolls[0]!= rolls[1] && rolls[1] != rolls[2] && rolls[0] != rolls[2]){//모두 다름
        int max = 0;
        for(int i=0;i<3;i++){
            if(rolls[i]>max){
                max = rolls[i];
            }
        }
        prize = max*100;
    }
    else{//같은거 두 개
        int sameIdx;
        if(rolls[0] == rolls[1] || rolls[1]==rolls[2]){
            sameIdx = 1;
        }else{
            sameIdx = 0;
        }
        prize = 1000 + rolls[sameIdx]*100;
        
    }

    cout<<prize;
}

