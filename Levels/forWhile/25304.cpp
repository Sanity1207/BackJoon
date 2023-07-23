#include <iostream>
using namespace std;

int main(){
    long total;
    int  n;
    long result = 0;
    int price,num;

    cin>>total;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>price>>num;
        result += price*num;
    }

    if(result==total){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    
}