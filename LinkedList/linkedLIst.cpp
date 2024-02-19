#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

void printLinkedList(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void printList(node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    printList(head->next);

}

int main(){
    node *head=new node(10);
    node *second=new node(20);
    node *third = new node(30);
    head->next=second;
    head->next->next=third;
    // head->next=new node(20);
    // head->next->next=new node(30);
    printLinkedList(head);
    cout<<endl;
    printList(head);

}