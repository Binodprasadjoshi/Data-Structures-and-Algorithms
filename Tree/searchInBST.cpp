#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

//Insert new node in BST
//Recursive SOlution
Node *insertBST(Node *root, int x){
    if(root==NULL){
        return new Node(x);
    }else if(x>root->data){
        root->right=insertBST(root->right,x);
    }else{
        root->left=insertBST(root->left,x);
    }
    return root;
}

//Iterative Insertion
Node *insert(Node *root,int x){
    Node *temp=new Node(x);
    Node *parent=NULL;
    Node *curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->data<x){
            curr=curr->right;
        }else if(curr->data>x){
            curr=curr->left;
        }else{
            return root;
        }
    }
    if(parent==NULL){
        return temp;
    }
    if(parent->data>x){
        parent->left=temp;
    }else{
        parent->right=temp;
    }
    return root;
}

//Recursive Search
bool searchBST(Node *root,int x){
    if(root==NULL){
        return false;
    }else if(root->data==x){
        return true;
    }else if(root->data<x){
        searchBST(root->right,x);
    }else{
        searchBST(root->left,x);
    }
}

//Iterative Solution
bool search(Node *root, int x){
    while(root!=NULL){
        if(root->data==x){
            return true;
        }else if(root->data<x){
            root=root->right;
        }else{
            root=root->left;
        }
    }
    return false;
}

int main(){
    Node *root= new Node(50);
    insertBST(root,55);
    insertBST(root,30);
    insertBST(root,40);
    insert(root,15);
    insert(root,75);
    cout<<search(root,75)<<endl;
    cout<<searchBST(root,45);

}
