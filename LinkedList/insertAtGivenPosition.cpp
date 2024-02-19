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

node *insert(node *head, int pos, int data){
    node *temp=new node(data);
    node *curr=head;
    if(pos==1){
        temp->next=head;
        return temp;
    }
    for(int i=0;i<pos-2 && curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        delete temp;
        return head;
    }else{
        temp->next=curr->next;
        curr->next=temp;
    }
    return head;
    
}

void printList(node *head){
    while(head!=NULL){
        cout<<head->data<<' ';
        head=head->next;
    }
    return;
}

int main(){
    node *head=new node(10);
    head->next= new node(20);
    head->next->next=new node(30);
    head=insert(head,4,50);
    printList(head);
}