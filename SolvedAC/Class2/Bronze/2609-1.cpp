#include <iostream>
#include <vector>
using namespace std;
int getGcd(int max, int min){

    if(min == 0){
        return max;
    }else{
        return getGcd(min,max%min);
    }
}

int main(){
    int a,b;
    int min,max;
    cin>>a>>b;

    if(a>b){
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }
    int gcd = getGcd(max,min);
    cout<<gcd<<endl;
    cout<<(min*max)/gcd<<endl;
}