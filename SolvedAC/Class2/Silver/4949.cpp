#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
    vector<string> arr;

    int tempidx = 0;

    bool dotFlag = false;
    bool breakFlag = false;
    while(!breakFlag){
        string temp = "";
        
        while(true){
            char c;
            cin>>c;
            if(c == '.' && dotFlag == true){
                breakFlag = true;
                temp += c;
                break;
            }else if(c == '.'){
                dotFlag = true;
                temp += c;
                break;
            }else{
                dotFlag = false;
                temp += c;
            }
        }
        arr.push_back(temp);
    }
    

    for(auto& str : arr){
        int small = 0;
        int big = 0;
        for(auto& a : str){
            if(a == '('){
                if(big%2 != 0){
                    break;
                }
                small++;
            }else if (a == ')'){
                if(big != 0)
                small--;
            }else if (a == '['){
                big++;
            }else if (a == ']'){
                big--;
            }
            if(small < 0) break;
            if(big < 0) break;
            
        }



        if(small == 0 && big == 0){
        cout<<"yes"<<"\n";
        }else{
            cout<<"no"<<"\n";
        }
    }

    cout<<"summary\n";
    
    for(auto& str : arr){
        cout<<str<<"\n";
    }

}