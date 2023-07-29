#include <vector>
#include <string>
#include <iostream>
using namespace std;

void insert(string str);

typedef struct __node{
    string str;
    struct __node* next;
}node;

vector<node*> nodeVec;

int main(){
    int n;
    string str;
    cin>>n;

    nodeVec.resize(51,nullptr);

    for(int i=0;i<n;i++){
        cin>>str;
        insert(str);
    }
    
    for(int i=1;i<51;i++){
        node* temp = nodeVec[i];
        while(temp){
            cout<<temp->str<<"\n";
            temp = temp->next;
        }
    }


}

void insert(string str){
    int len = str.length();
    node* temp = nodeVec[len];
    node* insertNode = new node;
    insertNode->str = str;
    insertNode->next = nullptr;

    if(nodeVec[len] == nullptr){//아직 길이에 해당하는 것이 없다.
        nodeVec[len] = insertNode;
        return;
    }
    if(insertNode->str < nodeVec[len]->str){ // 첫 번째에 들어가야 하는 경우
        insertNode->next = nodeVec[len];
        nodeVec[len] = insertNode;
        return;
    }
    if(insertNode->str == nodeVec[len]->str){// 첫 번째 친구와 문자열이 같은 경우
        delete insertNode;
        return;
    }

    while(temp->next && temp->next->str <= insertNode->str){
        if(temp->next->str == insertNode->str){
            delete insertNode;
            return;
        }
        temp = temp->next;
    }
    insertNode->next = temp->next; // temp->next 가 null 이어도 괜찮다.
    temp->next = insertNode;

    // for(temp = nodeVec[len];temp->next != NULL;temp = temp->next){
    //     if(temp->next->str == insertNode->str){
    //         return;
    //     }else if (temp->next->str > insertNode->str) {
    //         insertNode->next = temp->next;
    //         temp->next = insertNode;
    //         return;
    //     }
    // }
    // temp->next = insertNode
    //맨 마지막에 집어넣어야 하는 경우.
    
}

