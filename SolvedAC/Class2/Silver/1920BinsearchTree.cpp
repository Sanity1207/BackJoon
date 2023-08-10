#include <vector>
#include <iostream>
using namespace std;
class Node{
public:
    int value;
    Node* left;
    Node* right;
    Node(int value) : value(value), left(nullptr), right(nullptr){};
};

class BinaryTree{
public:
    Node* root;
    BinaryTree() : root(nullptr){}

    //insert node
    void insert(int value){
        root = insert(root,value);
    }

    bool search(int value){
        return search(root, value);
    }
private:
    Node* insert(Node* node, int value){
        if(node == nullptr){
            return new Node(value);
        }
        if(value < node->value){
            node->left = insert(node->left,value);
        }else if(value > node->value){
            node->right = insert(node->right, value);
        }
        return node;
    }

    bool search(Node* node, int value){
        if(node == nullptr){
            return false;
        }
        if(value == node->value){
            return true;
        }else if(value < node->value){
            return search(node->left, value);
        }else{
            return search(node->right,value);
        }   

    }

};

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    BinaryTree tree;
    int temp;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        tree.insert(temp);
    }
    cin>>m;
    vector<int> result(m);
    for(int i=0;i<m;i++){
        cin>>temp;
        result[i] = tree.search(temp);
    }

    for(auto& a : result){
        cout<<a<<"\n";
    }
}