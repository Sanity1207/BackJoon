#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int i = (n-54>0) ? n-54 : 0;


    int answer = 0;
    for(;i<n;i++){
        int match = i;

        for(int j=100000;j>=1;j/=10){
            match += (i/j)%10;
        }
        if(match==n){
            answer = i;
            break;
        }   
    }
    
    cout<<answer<<endl;;
}
