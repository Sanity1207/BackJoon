#include <iostream>
#include <vector>
using namespace std;
struct Person {
    int weight;
    int height;
    int place;
};

int main(){
    int n;
    cin>>n;

    vector<Person> perVec(n);

    for(int i=0;i<n;i++){
        cin>>perVec[i].weight>>perVec[i].height;
        perVec[i].place = 1;
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(perVec[i].weight < perVec[j].weight && perVec[i].height < perVec[j].height){
                perVec[i].place++;
            }else if(perVec[i].weight > perVec[j].weight && perVec[i].height > perVec[j].height){
                perVec[j].place++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<perVec[i].place<<"\n";
    }

}