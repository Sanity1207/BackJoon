#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(vector<short>& sortVec);



int main(){
    int n;
    cin>>n;
    vector<short> sortVec(n,0);

    for(int i=0;i<n;i++){
        cin>>sortVec[i];
    }

    countingSort(sortVec);

    for(int i=0;i<n;i++){
        cout<<sortVec[i]<<"\n";
    }

}

void countingSort(vector<short>& sortVec){
    int max = *max_element(sortVec.begin(),sortVec.end());
    int min = *min_element(sortVec.begin(),sortVec.end());

    int range = max-min+1; //둘 다 포함해야 하므로.

    vector<short> count(range),output(sortVec.size());
    for(int i=0;i<sortVec.size();i++){
        count[sortVec[i]-min]++; //인덱스 0부터 제일 작은 원소가 차례대로 쌓인다.
    }

    for(int i=1;i<count.size();i++){
        count[i] += count[i-1];
    }

    for(int i = sortVec.size()-1;i>=0;i--){
        output[count[sortVec[i] - min] - 1] = sortVec[i];
        count[sortVec[i] - min]--;
    }

    for(int i=0;i<sortVec.size();i++){
        sortVec[i] = output[i];
    }
}