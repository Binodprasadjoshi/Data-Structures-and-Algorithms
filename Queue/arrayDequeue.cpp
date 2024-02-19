#include<iostream>
using namespace std;

class Dequeue{
    int *arr;
    int capacity;
    int sz;
    public:
    Dequeue(int cap){
        capacity=cap;
        arr=new int[capacity];
        sz=0;
    }
    void insertFront(int x){
        if(sz==capacity){
            cout<<"Dequeue is full"<<endl;;
            return;
        }
        for(int i=sz;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=x;
        sz++;
        return;
    }
    void insertRear(int x){
        if(sz==capacity){
            cout<<"Dequeue is full"<<endl;;
            return;
        }
        arr[sz]=x;
        sz++;
        return;
    }
    int deleteFront(){
        if(sz==0){
            cout<<"Empty";
            return -1;
        }
        int res=arr[0];
        for(int i=0;i<sz-1;i++){
            arr[i]=arr[i+1];
        }
        sz--;
        return res;
    }
    int deleteRear(){
        if(sz==0){
            cout<<"Empty";
            return -1;
        }
        int temp=arr[sz];
        sz--;
        return temp;
    }
    int getFront(){
        if(sz==0){
            cout<<"Empty";
            return -1;
        }
        return arr[0];
    }
    int getRear(){
        if(sz==0){
            cout<<"Empty";
            return -1;
        }
        return arr[sz-1];
    }
    bool isEmpty(){
        return sz==0;
    }
    bool isFull(){
        return (sz==capacity);
    }
    int size(){
        return sz;
    }
    void display(){
        if(sz==0){
            return;
        }
        for(int i=0;i<sz;i++){
            cout<<arr[i]<<' ';
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