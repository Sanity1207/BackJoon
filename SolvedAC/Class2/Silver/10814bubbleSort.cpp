#include <vector>
#include <iostream>
#include <string>
using namespace std;

struct client{
    int age;
    string name;
};

int main(){
    int n;
    cin>>n; //회원 수
    vector<client> sortVec(n);

    for(int i=0;i<n;i++){
        cin>>sortVec[i].age>>sortVec[i].name;
    }

    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(sortVec[j].age > sortVec[j+1].age){
                swap(sortVec[j],sortVec[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    for(int i=0;i<n;i++){
        cout<<sortVec[i].age<<" "<<sortVec[i].name<<"\n";
    }
}