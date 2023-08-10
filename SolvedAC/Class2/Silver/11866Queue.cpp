#include <vector>
#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};  

class Queue{
    private: 
        node* front;
        node* rear;
    public:
        Queue() : front(nullptr), rear(nullptr){};
        ~Queue();
        void enqueue(int data);
        int dequeue();
        bool isEmpty();
        int frontValue();

};

Queue::~Queue(){
    while(!isEmpty()){
        dequeue();
    }
}
void Queue::enqueue(int data){
    node* newNode = new node{data,nullptr};
    if(rear==nullptr){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
}

int Queue::dequeue(){
    if(isEmpty()){
        cout<<"Fuck you"<<endl;
        return -1;
    }
    int retVal = front->data;
    node* temp = front;
    front = front->next;
    if(front==nullptr){
        rear = nullptr;
    }
    delete temp;
    return retVal;
}

bool Queue::isEmpty(){
    return front == nullptr;
}

int Queue::frontValue(){
    if(isEmpty()){
        cout<<"And fuck you too."<<endl;
        return -1;
    }
    return front->data;

}

int main(){
    int n,k;
    cin>>n>>k;
    Queue personQueue;
    for(int i=0;i<n;i++){
        personQueue.enqueue(i+1);
    }
    cout<<"<";
    for(int i=0;i<n;i++){
        for(int j=1;j<k;j++){
            personQueue.enqueue(personQueue.frontValue());
            personQueue.dequeue();
        }
        cout<<personQueue.frontValue();
        if(i != n-1){
            cout<<", ";
        }
        personQueue.dequeue();
    }
    cout<<">";

    

}