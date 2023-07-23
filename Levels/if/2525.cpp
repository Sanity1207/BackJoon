#include <iostream>
using namespace std;
int main(){
    int hour,minute,input;
    int t_hour,t_min;

    cin>>hour>>minute;
    cin>>input;

    t_hour = input/60;
    t_min = input%60;

    minute += t_min;
    if(minute > 59){
        minute -= 60;
        hour += 1;
    }

    hour += t_hour;
    if(hour>23){
        hour -= 24;
    }

    cout<<hour<<" "<<minute<<endl;
    
}