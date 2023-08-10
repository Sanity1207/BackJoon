#include <vector>
#include <iostream>

using namespace std;

vector<int> numberStack;
int top;
int pop();
void initStack();
void push(int num);

int main(){
    int k;
    cin>>k;
    int num;
    int answer = 0;
    initStack();
    
    for(int i=0;i<k;i++){
        cin>>num;
        if(num == 0){
            pop();
        }else{
            push(num);
        }
    }

    while(top>=0){
        answer += pop();
    }

    cout<<answer;

}

void initStack(){
    numberStack.resize(100000,0);   
    top = -1;
}

void push(int num){
    numberStack[++top] = num;
}

int pop(){
    if(top<0){
        cout<<"error"<<endl;
        exit(-1);
    }
    return numberStack[top--];
}