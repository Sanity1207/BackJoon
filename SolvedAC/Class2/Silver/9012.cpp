#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main(){
    
    int n;
    cin>>n;
    string str;
    vector<string> output;
    for(int i=0;i<n;i++){
        cin>>str;
        bool falseFlag = false;
        int answer = 0;
        for(auto& a : str){
            if(a == '('){
                answer++;
            }else{
                answer--;
                if(answer < 0){
                    falseFlag = true;
                    break;
                }
            }
        }

        if(falseFlag || answer != 0){
            output.push_back("NO");
        }else{
            output.push_back("YES");
        }
    }
    
    for(auto& a : output){
        cout<<a<<endl;
    }



}