#include <vector>
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};


class queueStruct{
private:

    node* front;
    node* rear;
    int size;
public:
    queueStruct();
    ~queueStruct();
    void push(int n);
    int  pop();
    bool isEmpty();
    int getSize();
};

queueStruct::queueStruct() : front(nullptr), rear(nullptr),size(0) {}
queueStruct::~queueStruct(){
    while(!isEmpty()){
        pop();
    }
}

void queueStruct::push(int data){
    node* newNode = new node{data, nullptr};
    if(rear == nullptr){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
    size++;
}
int queueStruct::getSize(){
    return size;
}
bool queueStruct::isEmpty(){
    
    if(size == 0)
        return true;
    else
        return false;
}
int queueStruct::pop(){
    if(isEmpty()){
        return -1;
    }
    int data = front->data;
    node* temp = front;
    front = front->next;
    if(front==nullptr){
        rear = nullptr;
    }
    size--;
    delete temp;
    return data;
}

int main(){
    queueStruct q;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }

    while(q.getSize()>1){
        q.pop();
        if(q.getSize() == 1) break;
        q.push(q.pop());

    }

    cout<<q.pop()<<"\n";
}