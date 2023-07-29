#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){

    string input;
    
    while(true){
        cin>>input;

        if(input == "0"){
            break;
        }
        bool sameFlag = true;
        for(int i=0;i<input.size()/2;i++){
            if(input[i] != input[input.size()-i-1]){
                sameFlag = false;
                break;
            }
        }

        if(sameFlag){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}