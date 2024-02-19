#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int capacity,size;
    public:
    Queue(int cap){
        capacity=cap;
        arr=new int[capacity];
        size=0;
    }
    void enqueue(int x){
        if(size==capacity){
            cout<<"Queue is full.";
            return;
        }
        arr[size]=x;
        size++;
        return;
    }
    int dequeue(){
        if(size==0){
            cout<<"Queue is empty.";
            return -1;
        }
        int res=arr[0];
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
        return res;

    }
    int getFront(){
        if(size==0){
            cout<<"Queue is empty.";
            return -1;
        }else{
            return arr[0];
        }
    }
    int getRear(){
        if(size==0){
            cout<<"Queue is empty.";
            return -1;
        }else{
            return arr[size-1];
        }
    }
    bool isEmpty(){
        return (size==0);
    }
    bool isFull(){
        return (size==capacity);
    }
    void display(){
        if(size==0){
            cout<<"Queue is empty.";
            return;
        }else{
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
        return ;
    }
};

int main(){
    Queue q1(5);
    q1.enqueue(10);
    q1.enqueue(15);
    q1.enqueue(20);
    q1.display();
    cout<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.isEmpty()<<endl;
    cout<<q1.getFront()<<endl;
    cout<<q1.getRear()<<endl;
    cout<<q1.isFull();
    
}