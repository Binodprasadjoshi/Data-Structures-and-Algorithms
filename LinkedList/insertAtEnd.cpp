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

void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return;
}

node *insertEnd(node *head,int x){
    node* temp=new node(x);
    if(head==NULL){
        return temp;
    }
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    
    curr->next=temp;
    return head;
}

node *deleteTail(node *head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}

int main(){
    node *head=NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertEnd(head,30);
    head= deleteTail(head);
    printList(head);

    return 0;
}