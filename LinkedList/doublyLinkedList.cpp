#include<iostream>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

int main(){
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->prev=temp1;
    
}