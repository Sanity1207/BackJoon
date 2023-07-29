#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,b,v;
    cin>>a>>b>>v;
    int interval = a-b; //하루에 올라가는 양
    int days = 0;

    
    days = (v-a-1) / interval + 2;
    if(v==a){
        days = 1;
    }

    cout<<days;
}