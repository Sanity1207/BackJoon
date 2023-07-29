#include <iostream>
#include <vector>

using namespace std;

int main(){
    int curLim = 1;
    int n;
    cin>>n;

    int answer;


    for(int i=0;;i++){
        curLim = curLim + i*6;
        if(n <= curLim){
            answer = i+1;
            break;
        }
    }

    cout<<answer;
}