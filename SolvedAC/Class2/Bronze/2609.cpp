#include <iostream>
#include <vector>
using namespace std;
//my code
//a = n 이고 b = n 일때 (둘 중 더 큰 것이 n일때)

//시간복잡도 : O(n^2);




int main(){
    
    int a,b;
    int min;
    int max;
    int commonMin;
    int commonMax;
    cin>>a>>b;

    if(a>b){
        min = b;
        max = a;
    }
    else{
        min = a;
        max = b;
    }

    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i == 0){
            commonMin = i;
        }
    }

    for(int i = max;;i++ ){
        if(i%a==0 && i%b==0){
            commonMax = i;
            break;
        }
    }

    cout<<commonMin<<endl;
    cout<<commonMax<<endl;
}