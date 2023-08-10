#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int checkMinBlack(vector<string> arr, int i,int j);
int checkMinWhite(vector<string> arr, int i, int j);

int n,m;
int main(){
    
    cin>>n>>m;
    //m is 가로 길이

    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minimum = 99999999;
    

    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            int temp = min(checkMinBlack(arr,i,j),checkMinWhite(arr,i,j));
            // cout<<"temp for "<<i<<","<<j<<": "<<temp<<endl;
            if(minimum > temp){
                minimum = temp;
            }
        }
    } 
    cout<<minimum<<endl;
}

int checkMinBlack(vector<string> arr, int i,int j){
    int minblack = 0;
    //check black

    for(int y = i;y<i+8;y++){
        for(int x = j;x<j+8;x++){
                if((y+x)%2 == (i+j)%2){ // must be black
                    if(arr[y][x] != 'B'){
                        minblack++;
                    }
                }else{ // must be white
                    if(arr[y][x] != 'W'){
                        minblack++;
                    }
                }
        }
    }
    return minblack;
}

int checkMinWhite(vector<string> arr, int i, int j){
    int minwhite = 0;
    //check black


    for(int y = i;y<i+8;y++){
        for(int x = j;x<j+8;x++){
            // if(x==j && y==i)continue;
                if((y+x)%2 == (i+j)%2){ // must be white
                    if(arr[y][x] != 'W'){
                        minwhite++;
                    }
                }else{ // must be black
                    if(arr[y][x] != 'B'){
                        minwhite++;
                    }
                }
        }
    }
    return minwhite;
}