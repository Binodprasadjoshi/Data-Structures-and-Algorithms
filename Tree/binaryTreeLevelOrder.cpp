#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void printLevelOrder(Node* root){
    queue<Node*> n;
    n.push(root);
    //n.push(NULL);
    while(!n.empty()){
        Node* temp = n.front();
        // if(temp == NULL){
        //      n.pop();
        //     cout<<endl;
        //     if(!n.empty()){
        //         n.push(NULL);
        //     }
        // }
        // else{
        //     n.pop();
        //     cout<<temp->data<<" ";

        //     if(temp->left){
        //         n.push(temp->left);
        //     }
        //     if(temp->right){
        //         n.push(temp->right);
        //     }
        // }

        n.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            n.push(temp->left);
        }
        if(temp->right){
            n.push(temp->right);
        }
    }
    return;
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

Node* buildLevelOrder(){
    int d;
    cin>>d;

    Node* root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1){
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right = new Node(c2);
            q.push(current->right);
        }
    }


    return root;
}

int main(){
    cout<<"Enter elements for a tree: ";
    Node* root = buildLevelOrder();
    cout<<"The tree is: ";
    printLevelOrder(root);
    //preOrderTraversal(root);

    return 0;
}