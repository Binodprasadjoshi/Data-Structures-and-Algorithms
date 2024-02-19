#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void printLinkedList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

node *insertBegin(node *head, int x){
    node *temp=new node(x);
    temp->next=head;
    return temp;
}

node *deleteHead(node *head){
    if(head==NULL){
        return head;
    }else{
        node *temp=head->next;
        delete head;
        return temp;
    }
    
}

int main(){
    node *head=NULL;
    head=insertBegin(head, 10);
    head=insertBegin(head, 20);
    head=insertBegin(head,50);
    head=deleteHead(head);
    printLinkedList(head);
}

