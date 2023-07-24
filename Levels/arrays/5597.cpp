#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<bool> totalStudent;
    totalStudent.resize(30,false);

    for(int i=0;i<28;i++){
        int num;
        cin>>num;

        totalStudent[num-1] = true;
    }

    for(int i=0;i<30;i++){
        if(!totalStudent[i]){
            cout<<i+1<<" ";
        }
    }

}