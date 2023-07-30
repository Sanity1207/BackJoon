#include <iostream>
#include <string>
using namespace std;
int factorial(int i);

int main(){
    int n;
    cin>>n;
    unsigned long long  num = factorial(n);
    // cout<<n<<" factorial : "<<num<<"\n";
    string numbers = to_string(num);
    int zeroCount = 0;

    for(int i = numbers.size()-1;i>=0;i--){
        // cout<<"number->"<<i<<" = "<<numbers[i]<<"\n";
        if(numbers[i] != '0') break;
        zeroCount++;
    }
    cout<<zeroCount<<endl;
}

int factorial(int i){
    
    if(i==1 || i==0){
        return 1;
    }
    return i * factorial(i-1);
}