#include<iostream>
using namespace std;

class MyStack{
    int *arr;
    int top;
    int capacity;

    public:
    MyStack(int c){
        top=-1;
        capacity=c;
        arr=new int[capacity];
    }
    void push(int x){
        if(top==capacity-1){
            cout<<"Stack is full";
            return;
        }
        top++;
        arr[top]=x;
        return;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack is Empty";
        }
        int temp=arr[top];
        top--;
        return temp;
    }
    void print(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is Empty";
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return (top==-1);
    }
};

int main(){
    MyStack s1(10);
    s1.push(10);
    s1.push(20);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.peek()<<endl;
    cout<<s1.isEmpty();

}