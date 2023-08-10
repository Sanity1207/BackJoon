#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    int count = 0;
    int index = 0;
    vector<int> arr(n);
    vector<int> answer;

    for(int i=0;i<n;i++){
        arr[i] = i;
    }

    while(count<n){
        int checked = 0;
        while(true){
            if(arr[index] == -1){
                index++;
                if(index >= n) index %= n;
                continue;
            }
            checked++;
            if(checked == k) break;
            index++;
            if(index >= n) index %= n;

            
        }
        answer.push_back(arr[index]);
        arr[index] = -1;
        count++;
    }
    cout<<"<";
    for(int i=0;i<answer.size()-1;i++){
        cout<<answer[i]+1<<", ";
    }
    cout<<answer[answer.size()-1] + 1<<">"<<"\n";
}