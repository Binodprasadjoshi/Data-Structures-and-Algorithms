#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int capacity,size,front;
    public:
    Queue(int cap){
        capacity=cap;
        arr=new int[capacity];
        size=front=0;
    }
    int getRear(){
        if(size==0){
            return -1;
        }
        return arr[(front+size-1)%capacity];
    }
    int getFront(){
        if(size==0){
            return -1;
        }
        return arr[front%capacity];
    }
    bool isEmpty(){
        return (size==0);
    }
    bool isFull(){
        return (size==capacity);
    }
    void enQueue(int x){
        if(size==capacity){ //isFull();
            return;
        }
        int rear=getRear();
        rear=(rear+1)%capacity;
        arr[rear]=x;
        size++;
        return;
    }
    int deQueue(){
        if(isEmpty()){
            return -1;
        }
        int res=arr[front];
        front=(front+1)%capacity;
        size--;
        return res;
    }
    void display(){
        if(isEmpty()){
            return;
        }
        int j=front;
        for(int i=0;i<size;i++){
            cout<<arr[j]<<" ";
            j=(j+1)%capacity;
        }
        return;
    }
};

int main(){
    Queue q1(3);
    q1.enQueue(10);
    q1.enQueue(20);
    q1.enQueue(30);

    q1.display();
    cout<<endl<<q1.deQueue()<<endl;
    cout<<q1.isEmpty()<<endl;
    cout<<q1.getFront()<<endl;
    q1.enQueue(50);
    cout<<q1.isFull()<<endl;
    cout<<q1.getRear()<<endl;
    cout<<q1.deQueue()<<endl;
    q1.display();

}