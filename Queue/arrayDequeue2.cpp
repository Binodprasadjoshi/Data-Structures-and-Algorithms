#include<iostream>
using namespace std;

class Dequeue{
    int *arr;
    int capacity,sz,front;

    public:
    Dequeue(int cap){
        capacity=cap;
        arr=new int[cap];
        sz=0;
        front=0;
    }
    void insertFront(int x){
        if(sz==capacity){
            cout<<"Dequeue is full"<<endl;
            return;
        }
        front=(front-1+capacity)%capacity;
        arr[front]=x;
        sz++;
        return;
    }
    void insertRear(int x){
        if(sz==capacity){
            cout<<"Dequeue is full"<<endl;
            return;
        }
        int new_rear=(front+sz)%capacity;
        arr[new_rear]=x;
        sz++;
        return;
    }
    int deleteFront(){
        if(sz==0){
            cout<<"Empty";
            return -1;
        }
        int res=arr[front];
        front=(front+1)%capacity;
        sz--;
        return front;
    }
    int deleteRear(){
        if(sz==0){
            cout<<"Empty";
            return -1;
        }
        int res=arr[(front+sz-1)%capacity];
        sz--;
        return res;
    }
    int getFront(){
        if(sz==0){
            return -1;
        }
        return front;
    }
    int getRear(){
        if(sz==0){
            return -1;
        }
        return (front+sz-1)%capacity;
    }
    bool isFull(){
        return capacity==sz;
    }
    bool isEmpty(){
        return sz==0;
    }
    int size(){
        return sz;
    }
    void display(){
        int index=front;
        for(int i=front;i<(front+sz);i++){
            cout<<arr[index]<<" ";
            index=(front+i)%capacity;
        }
        cout<<endl;
    }
};

int main(){
    Dequeue q1(5);
    q1.insertFront(10);
    q1.insertRear(500);
    q1.insertRear(234);
    q1.insertFront(5);
    q1.insertFront(1);
    q1.deleteFront();
    q1.deleteRear();
    q1.insertFront(0);
    q1.insertRear(35);
    cout<<q1.isEmpty()<<endl;
    cout<<q1.isFull()<<endl;
    cout<<q1.size()<<endl;
    cout<<q1.getFront()<<endl;
    cout<<q1.getRear()<<endl;
    q1.display();
}