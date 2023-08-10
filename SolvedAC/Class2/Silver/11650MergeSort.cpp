#include <vector>
#include <iostream>
using namespace std;

struct dot{
    int x;
    int y;
};
void mergeSort(vector<dot>& dotVec, int left, int right);
void merge(vector<dot>& dotVec, int left, int middle, int right);


int main(){
    int n;
    cin>>n;

    vector<dot> dotVec(n);

    for(int i=0;i<n;i++){
        cin>>dotVec[i].x>>dotVec[i].y;
    }

    mergeSort(dotVec,0,n-1);

    for(int i=0;i<n;i++){
        cout<<dotVec[i].x<<" "<<dotVec[i].y<<"\n";
    }

}

void mergeSort(vector<dot>& dotVec, int left, int right){

    if(left>=right){
        return;
    }
    int middle = left + (right-left)/2;
    
    mergeSort(dotVec, left, middle);
    mergeSort(dotVec, middle+1, right);
    merge(dotVec,left,middle,right);
}

void merge(vector<dot>& dotVec, int left, int middle, int right){
    int lSize = middle-left + 1;
    int rSize = right-middle;

    vector<dot> leftArr(lSize),rightArr(rSize);

    for(int i=0;i<lSize;i++){
        leftArr[i] = dotVec[left+i];
    }
    for(int i=0;i<rSize;i++){
        rightArr[i] = dotVec[middle+1+i];
    }

    int r=0;
    int l = 0;
    int mergeIndex = left;

    while(l<lSize && r<rSize){
        if(leftArr[l].x < rightArr[r].x){//left 가 더 작을경우
            dotVec[mergeIndex] = leftArr[l];
            l++;
        }else if (leftArr[l].x == rightArr[r].x){
            if(leftArr[l].y <= rightArr[r].y){
                dotVec[mergeIndex] = leftArr[l];
                l++;
            }else{
                dotVec[mergeIndex] = rightArr[r];
                r++;
            }

        }else{
            dotVec[mergeIndex] = rightArr[r];
            r++;
        }
        mergeIndex++;
    }

    while(l<lSize){
        dotVec[mergeIndex++] = leftArr[l++];
    }

    while(r<rSize){
        dotVec[mergeIndex++] = rightArr[r++];
    }
}