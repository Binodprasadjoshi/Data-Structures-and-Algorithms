#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data =x;
        next=NULL;
    }
};

class Queue{
    Node *front;
    Node *rear;
    public:
    Queue(){
        front=rear=NULL;
    }
    void enQueue(int x){
        Node *temp=new Node(x);
        if(front==NULL){
            front=rear=temp;
            return;    
        }
        rear->next=temp;
        return;
    }
    int deQueue(){
        if(front==NULL){
            return -1;
        }
        Node *temp=front;
        front=front->next;
        if(front==NULL)  {rear=NULL;}
        int res=temp->data;
        delete temp;
        return res;
    }
    bool isEmpty(){
        return front==NULL;
    }
    int getFront(){
        return front->data;
    }
    int getRear(){
        return rear->data;
    }
    void display(){
        if(front==NULL){
            return;
        }
        Node *temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue q1;
    q1.enQueue(10);
    q1.enQueue(20);
    q1.enQueue(30);
    cout<<q1.deQueue()<<endl;
    q1.enQueue(50);
    cout<<q1.isEmpty()<<endl;
    cout<<q1.getFront()<<endl;
    cout<<q1.getRear()<<endl;
    q1.enQueue(199);
    q1.enQueue(200);
    cout<<q1.deQueue()<<endl;
    q1.enQueue(100);
    q1.enQueue(500);
    q1.display();

}