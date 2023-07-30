#include <iostream>
#include <vector>
using namespace std;


void quickSort(vector<int>& sortVec,int left, int right);
int partition(vector<int>& sortVec, int left, int right);

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n;
    cin>>n;
    vector<int> sortVec;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sortVec.push_back(temp);
    }

    quickSort(sortVec,0,n-1);

    for(auto& a : sortVec){
        cout<<a<<"\n";
    }
}

int partition(vector<int>& sortVec, int left, int right){
    int pivot = sortVec[right]; //pivot 의 기준이 되는 element 는 맨 오른쪽
    int i = left; //맨 왼쪽부터 비교 시작.

    for(int j=left;j<=right-1;j++){ 
        if(sortVec[j]<=pivot){
            swap(sortVec[i],sortVec[j]);
            i++;
        }
         // i is the location of the pivot.
    }
    swap(sortVec[i],sortVec[right]);
    return i;
}

void quickSort(vector<int>& sortVec,int left, int right){
    if(left<right){
        int pivotIndex = partition(sortVec,left,right);
        quickSort(sortVec,left,pivotIndex-1);
        quickSort(sortVec,pivotIndex+1,right);
    }
}