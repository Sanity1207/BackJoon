#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int n;

    cin>>n;
    int count = 0;
    int num = 1;
    while(true){
        string numbers = to_string(num);
        if(numbers.find("666") != string::npos){
            count++;
            if(count == n){
                break;
            }
        }

        num++;

    }

    cout<<num<<endl;
}