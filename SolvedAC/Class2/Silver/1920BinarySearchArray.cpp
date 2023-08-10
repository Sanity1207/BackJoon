#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<int>& arr, int x){
    int left = 0; int right = arr.size()-1;
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid] == x){
            return true;
        }
        else if(arr[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return false;
}



int partition(vector<int>& arr, int left, int right){
    int pivot = arr[right];
    int i = left;

    for(int j=left;j<=right-1;j++){
        if(arr[j] <= pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[right]);
    return i;
}

void quickSort(vector<int>& arr, int left, int right){
    if(left < right){
        int pivotIndex = partition(arr,left,right);
        quickSort(arr,left,pivotIndex-1);
        quickSort(arr,pivotIndex+1,right);
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    cin>>n;
    vector<int> inputArr(n);
    for(int i=0;i<n;i++){
        cin>>inputArr[i];
    }
    sort(inputArr.begin(),inputArr.end());
    

    int m;
    cin>>m;
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(binarySearch(inputArr,x)){
            cout<<"1"<<"\n";
        }
        else{
            cout<<"0"<<"\n";
        }
    }
}