#include<iostream>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

node *insertBegin(node *head, int x){
    node *temp=new node(x);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
}

node *deleteHead(node *head){
    if(head==NULL)  return head;
    if(head->next==NULL){
        return head->next;
        delete head;
    }
    node *temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
    return head;
}

void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return;
}

int main(){
    node *head=NULL;
    head=insertBegin(head,20);
    head=insertBegin(head,30);
    head=deleteHead(head);
    printList(head);
}