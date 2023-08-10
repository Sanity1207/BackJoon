#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<char> stack(110);
int top;
void checkPrintStack();
void push(char c);
void reset();
char peek();
void pop();
int main(){
    top = -1;
    bool prevDotFlag = false;
    bool gameOverFlag = false;
    string temp;
    string line = "";
    while(getline(cin,temp)){
        line+=temp;
        if(temp == "."){
            break;
        }
    }

    for(auto& c : line){

        if(c == '.'){
            if(prevDotFlag){//game over
                gameOverFlag = true;
                break;
            }else{
                prevDotFlag = true;
                checkPrintStack();
                continue;
            }
        }else{
            prevDotFlag = false;
        }
        
        if (c == '('){
            push(c);
        }else if (c == ')'){
            if(peek() == '('){
                pop();
            }else{
                push(c);
            }
        }else if(c == '['){
            push(c);
        }else if (c == ']'){
            if(peek() == '['){
                pop();
            }else{
                push(c);
            }
        }
    }
        

    }


void checkPrintStack(){
    if(top > -1){
        cout<<"no"<<endl;
    }else{
        cout<<"yes"<<endl;
    }
    reset();
}


void push(char c){
    stack[++top] = c;
}
void pop(){
    if(top == -1){
        cout<<"error!"<<endl;
    }
    top--;
}
char peek(){
    return stack[top];
}
void reset(){
    top = -1;
}