#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    int answer = 0;
    cin>>n;
    
    for(int i=0;i<n;i++){//n번 돈다.
        int num;
        cin>>num;
        if(num==1){//1은 소수가 아님.
            continue;
        }

        bool sosuFlag = true;
        for(int j=2;j<=num/2;j++){//num이 소수인지 확인
            if(num%j == 0){
                // cout<<num<<"은 소수가 아님"<<endl;
                sosuFlag = false;
                break;
            }
        }
        if(sosuFlag==true){
            // cout<<num<<" 은소수"<<endl;
            // cout<<"answer = answer + 1";
            answer++;
            // cout<<" : "<<answer<<endl;
        }
        

    }

    cout<<answer<<endl;
}