#include <vector>
#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> arr(5000);

    arr[3] = 1;
    arr[5] = 1;
    for(int i=6;i<=n;i++){
        if(arr[i-3]){
            if(!arr[i-5]){
                arr[i] = arr[i-3] + 1;
            }else{
                arr[i] = min(arr[i-3] + 1,arr[i-5]+1);
            }
        }
        if(arr[i-5]){
            if(!arr[i-3]){
                arr[i] = arr[i-5] + 1;

            }else{  
                arr[i] = min(arr[i-3]+1,arr[i-5]+1);
            }
        }
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i] == 0){
            arr[i] = -1;
        }
    }

    cout<<arr[n]<<"\n";
    
}