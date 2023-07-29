#include <iostream>
#include <vector>
using namespace std;
//최상의 방법으로 푼듯. 굳굳.

//시간복잡도 : O(b^a)
int getPeople(int a, int b){

    int sum = 0;
    if(a==0){
        return b;
    }

    for(int i=1;i<=b;i++){
        sum += getPeople(a-1,i);
    }
    return sum;
}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,result;
        cin>>a>>b;
        result = getPeople(a,b);
        cout<<result<<endl;

    }
}