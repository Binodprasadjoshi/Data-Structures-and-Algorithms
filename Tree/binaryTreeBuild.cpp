#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

Node* preOrderBuild(){
    int d;
    cin>>d;
    if(d == -1){
        return NULL;
    }

    Node* n = new Node(d);
    n->left = preOrderBuild();
    n->right = preOrderBuild();
    return n;
}

void printPreOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}


int main(){
    cout<<"Enter the elements of tree: ";
    Node* root = preOrderBuild();
    printPreOrder(root);

    return 0;
}
