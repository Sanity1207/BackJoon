#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<double> scores;

    int size;
    double  max = 0;
    double temp;
    double average = 0;

    cin>>size;
    for(int i=0;i<size;i++){
        cin>>temp;
        if(temp>max) max = temp;
        scores.push_back(temp); 
    }

    for(auto& a : scores){
        a = (a/max)*100;
        average += a;
    }

    cout<<average/size<<endl;
}