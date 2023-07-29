#include <iostream>
#include <vector>
using namespace std;
void quicksort(vector<int>& sortVec, int left, int right);
int partition(vector<int>& sortVec, int left, int right);


int main(){
    
    int n;
    cin>>n;
    vector<int> sortVec(n);
    for(int i=0;i<n;i++){
        cin>>sortVec[i];
    }
    quicksort(sortVec,0,n-1);
    for(auto& a : sortVec){
        cout<<a<<"\n";
    }


}

int partition(vector<int>& sortVec, int left, int right){
    int pivot = sortVec[right]; //pivot is chosen as the right most element.
    int i = left;

    for(int j=left;j<=right-1;j++){
        if(sortVec[j]<=pivot){
            swap(sortVec[i],sortVec[j]);
            i++;
        }
    }
    swap(sortVec[i],sortVec[right]);
    return i;

}

void quicksort(vector<int>& sortVec, int left, int right){
    if(left<right){
        int pivotIndex = partition(sortVec,left,right);
        quicksort(sortVec,left,pivotIndex-1);
        quicksort(sortVec,pivotIndex+1,right);
    }
}