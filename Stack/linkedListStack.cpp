#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

class MyStack{
    Node *head;
    int sz;

    public:
    MyStack(){
        sz=0;
        head=NULL;
    }
    void push(int x){
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        sz++;
        return;
    }
    int pop(){
        if(head==NULL){
            return -1;
        }
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete temp;
        sz--;
        return res;
    }
    int peek(){
        if(head==NULL){
            return -1;
        }
        return head->data;
    }
    int isEmpty(){
        return (head==NULL);
    }
    int size(){
        return sz;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        return;
    }
};

int main(){
    MyStack s1;
    s1.push(10);
    s1.push(20);
    cout<<endl<<s1.peek();
    cout<<endl<<s1.pop();
    cout<<endl<<s1.isEmpty();
    s1.push(50);
    cout<<endl<<s1.size()<<endl;
    s1.display();
}
