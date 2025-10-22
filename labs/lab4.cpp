#include <iostream>

using namespace std;

//prototype
//stack implementation
//queue implementation
class Queue {
    public: 
        int arr[5];
        int front;
        int rear;
        int elems;

    Queue(){
        front = -1;
        rear = -1;
        elems = 0;
    }

    bool isFull(){
        return elems == sizeof(arr)/sizeof(int);
    }

    bool isEmpty(){
        return elems == 0;
    }

    int dQ(){
        if(this->isEmpty()){
            return -1;
        }

        int elem = arr[front];

        if(front == (sizeof(arr)/sizeof(int)) - 1){
            front = 0;
        } else{
            front++;
        }

        elems--;

        return elem;
    }

    void eQ(int elem){
        if(this->isFull()){
            return; 
        }

        if(this->isEmpty()){
            front = rear = 0;
        }

        arr[rear++] = elem;

        if(rear > (sizeof(arr)/sizeof(int)) - 1){
            rear = 0;
        }

        elems++;
    }
};

class Stack {
    public:
        int size = 10;
        int top;
        int arr[10];

    Stack(){
        top = -1;
    }

    int push(int elem){
        if(top == size - 1){
            cout << "Out of bounds" << '\n';
            return -1;
        }

        arr[++top] = elem;
        return 0;
    }

    int popIndex(){
        if(top <= -1){
            return -1;
        }

        return top--;
    }

    int topValue(){
        if(top > -1){
            return arr[top];
        }

        return -1;
    }
};

int main () {
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    cout << s.topValue() << '\n';
    s.push(44);
    s.push(55);
    s.push(66);
    cout << s.topValue() << '\n';
    s.popIndex();
    s.popIndex();
    cout << s.topValue() << '\n';

    Queue q;
    q.eQ(1);
    q.eQ(2);
    q.eQ(3);
    q.eQ(4);
    q.eQ(5);
    q.dQ();

    return 0;
}

