#include <iostream>
using namespace std;

int main(){
    int num;
    int multiplier;
    int answer;

    int hundred;
    int ten;
    int one;

    cin>>num;
    cin>>multiplier;

    hundred = multiplier/100;
    ten = (multiplier%100)/10;
    one = multiplier%10;
    answer = num*multiplier;

    cout<<num*one<<endl;
    cout<<num*ten<<endl;
    cout<<num*hundred<<endl;

    cout<<answer<<endl;


}