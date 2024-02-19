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

node *insertTail(node *head,int x){
    node *temp=new node(x);
    node *curr=head;
    if(head==NULL){
        return temp;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

//Iterative Solutin
int searchNode(node *head,int x){
    int i=1;
    while(head!=NULL){
        if(head->data==x){
            return i;
        }
        head=head->next;
        i++;
    }
    return -1;
}

//Recursive solution
int search(node *head, int x){
    if(head==NULL)  return -1;
    if(head->data==x)   return 1;
    if(head->data!=x){
        int n=search(head->next,x);
        if(n==-1)   return -1;
        else        return n+1;
    }
}

int main(){
    node *head=NULL;
    head=insertTail(head,10);
    head=insertTail(head,20);
    head=insertTail(head,30);

    printList(head);
    cout<<endl<<search(head,30);
    cout<<endl<<searchNode(head,20);
}