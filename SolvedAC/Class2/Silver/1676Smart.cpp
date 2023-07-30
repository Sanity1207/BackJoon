#include <string>
#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int numofTwo = 0;
    int numofFive = 0;

    for(int i=n;i>0;i--){
        int temp = i;
        while(temp%2==0){
            temp = temp/2;
            numofTwo++;
        }
        temp = i;
        while(temp%5==0){
            temp = temp/5;
            numofFive++;
        }
    }
    // cout<<"numofFive: "<<numofFive<<endl;
    // cout<<"numofTwo: "<<numofTwo<<"\n";

    if(numofTwo<numofFive){
        cout<<numofTwo;
    }else{
        cout<<numofFive;
    }
}