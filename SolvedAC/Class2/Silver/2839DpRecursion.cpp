#include <vector>
#include <iostream>

using namespace std;
int getnum(vector<int>& arr, int index);
int main(){
    int var;
    vector<int> num(5000);
    num[3] = 1;
    num[5] = 1;

    cin>>var;
    cout<<getnum(num,var);
}

int getnum(vector<int>& arr, int index){
    if(index<0) return -1;
    if(arr[index]>0) return arr[index];
    

    int three = getnum(arr,index-3);
    int five = getnum(arr,index-5);

    if(three == -1 && five == -1){
        arr[index] = -1;
        return -1;
    }
    else if(three == -1){
        arr[index] = five + 1;
        return five + 1;
    }else if (five == -1){
        arr[index] = three + 1;
        return three + 1;
    }else{
        arr[index] = min(five+1,three+1);
        return arr[index];
    }

    return arr[index];
}