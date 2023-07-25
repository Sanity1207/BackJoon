#include <iostream>
#include <vector>

using namespace std;

int main(){
    while(true){
        vector<int> threeVec;
        threeVec.resize(3);
        int maxIdx;
        int max = 0;
        int check = 0;

        bool exitFlag = true;
        for(int i=0;i<3;i++){
            int temp;
            cin>>temp;
            if(temp!=0) 
                exitFlag = false;
            threeVec[i] = temp;
        }
        if(exitFlag) break;

        for(int i=0;i<3;i++){
            
            if (threeVec[i]>max){
                max = threeVec[i];
                maxIdx = i;
            }
        }

        for(int i=0;i<3;i++){

            if(i!=maxIdx){
                check += threeVec[i]*threeVec[i];
            }
        }

        if(max*max == check){

            cout<<"right"<<endl;

        }else{

            cout<<"wrong"<<endl;
        }


    


        

        




        



    }
}