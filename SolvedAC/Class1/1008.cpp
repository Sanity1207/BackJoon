#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
    double a;
    double b;
    double result;
    cin>>a;
    cin>>b;

    result = a/b;
    cout << fixed << setprecision(15) << result << endl;

}