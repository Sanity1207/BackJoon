#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

unsigned long long getLeftOver(int a, int i);

int main(){
    int n;
    string str;

    cin>>n;
    cin>>str;

    char a;

    unsigned long long answer = 0;
    unsigned long long finAnswer = 0;
    for(int i=0;i<n;i++){
        a = str[i];
        a = a - 'a' + 1;
        answer += getLeftOver(a,i);
    }
    finAnswer = answer%1234567891;
    cout<<finAnswer;
}

unsigned long long getLeftOver(int a, int i){
    //a * 31^i;
    int addition = 1;
    for(int k = 0;k<i;k++){
        addition*=31;
        addition = addition % 1234567891;
    }
    return addition*a;
}