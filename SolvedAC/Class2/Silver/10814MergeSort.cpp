#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct client{
    int age;
    string name;
};
void mergeArrays(vector<client>& arr,int left, int middle, int right);
void mergeSort(vector<client>& arr, int left, int right);

int main(){
    int n;
    cin>>n; //회원 수
    vector<client> sortVec(n);

    for(int i=0;i<n;i++){
        cin>>sortVec[i].age>>sortVec[i].name;
    }
    mergeSort(sortVec,0,n-1);

    for(int i=0;i<n;i++){
        cout<<sortVec[i].age<<" "<<sortVec[i].name<<"\n";
    }

}

void mergeSort(vector<client>& arr, int left, int right){
    if(left>=right){ // arr 의 사이즈가 1이면 리ㄴ
        return;
    }
    int middle = left + (right-left)/2;
    
    mergeSort(arr,left,middle);
    mergeSort(arr,middle+1,right); 
    mergeArrays(arr,left,middle,right);   
}

void mergeArrays(vector<client>& arr,int left, int middle, int right){
    int leftSize = middle-left + 1; // left 배열의 크기를 구한다.
    int rightSize = right-middle; // right 배열의 크기를 구한다.
    //middle 원소는 왼쪽 배열에 포함.

    vector<client> leftArr(leftSize), rightArr(rightSize);

    //left 배열과 right 배열을 채워 준다.
    for(int i=0;i<leftSize;i++){
        leftArr[i] = arr[left+i];
    }
    for(int j=0;j<rightSize;j++){
        rightArr[j] = arr[middle+1+j];
    }

    int leftIdx = 0; // left 배열을 traverse 하는 인덱스
    int rightIdx = 0; // right 배열을 traverse 하는 인덱스
    int mergeIdx = left;


    while(leftIdx < leftSize && rightIdx < rightSize){
        if(leftArr[leftIdx].age <= rightArr[rightIdx].age){
            arr[mergeIdx] = leftArr[leftIdx];
            leftIdx++;
        }else{
            arr[mergeIdx] = rightArr[rightIdx];
            rightIdx++;
        }
        mergeIdx++;
    }

    //remaining 것들이 있다면 
    while(leftIdx<leftSize){
        arr[mergeIdx] = leftArr[leftIdx];
        mergeIdx++;
        leftIdx++;
    }
    while(rightIdx<rightSize){
        arr[mergeIdx] = rightArr[rightIdx];
        mergeIdx++;
        rightIdx++;
    }

}