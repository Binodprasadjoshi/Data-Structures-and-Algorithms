#include<iostream>
using namespace std;

//Node of a tree
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

//Tree Traversals
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    return;
}
void preorder(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    return;
}
void postorder(Node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    return;
}

//Height of a binary tree
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}

//Print nodes at distance k from root
void printAtK(Node *root, int k){
    if(root==NULL)  return;
    if(k==0){
        cout<<root->data<<" ";
        return;
    }else{
        printAtK(root->left,k-1);
        printAtK(root->right,k-1);
    }
    return;
}

//Size of binary tree
int getSize(Node *root){
    if(root==NULL){
        return 0;
    }
    return 1+getSize(root->left)+getSize(root->right);
}

int main(){
    Node *root=new Node (10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left = new Node(40);
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl<<"Preorder: ";
    preorder(root);
    cout<<endl<<"Postorder: ";
    postorder(root);

    cout<<endl<<"Height of tree: "<<height(root);
    cout<<endl<<"Size of tree: "<<getSize(root);
    cout<<endl;
    printAtK(root,2);
}
