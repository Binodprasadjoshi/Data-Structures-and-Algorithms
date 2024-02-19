#include<iostream>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node(int x){
        data=x;
        prev=next=NULL;
    }
};

void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return;
}

node *addTail(node *head, int x){
    node *temp=new node(x);
    if(head==NULL)  return temp;
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}

node *delTail(node *head){
    if(head==NULL)  return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;
}

int main(){
    node *head=NULL;
    head=addTail(head, 10);
    head=addTail(head, 20);
    head=addTail(head, 30);
    printList(head);
    cout<<endl;
    head=delTail(head);
    printList(head);
    return 0;
}