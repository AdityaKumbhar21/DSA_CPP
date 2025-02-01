#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int size, rear, front;
    public:
        Queue(int s){
            size = s;
            arr = new int[size];
            rear = front = -1;
        }

        bool isEmpty(){
            return front == -1;
        }

        bool isFull(){
            return rear == size-1;
        }

        void push(int x){
            if(isEmpty()){
                front = rear = 0;
                arr[0] = x; 
            }
            else if(isFull()){
                cout<<"Queue overflow"<<endl;
                return;
            }
            else{
                rear = rear+1;
                arr[rear] = x;
            }
        }

        void pop(){
            if(isEmpty()){
                cout<<"Queue Underflow"<<endl;
                return;
            }
            else if(front > rear){
                 cout<<"Queue Underflow"<<endl;
                 front = rear = -1;
                 return;
            }
            else{
                cout<<"Popped element: "<<arr[front]<<endl;
                front = front +1;
            }
        }

        void showFront(){
            if(isEmpty()){
                cout<<"Queue is Empty"<<endl;
                return;
            }
            else{
                cout<<arr[front]<<endl;
                return;
            }

        }
};

int main()
{
    Queue q(4);
    q.push(14); // 14
    cout<<q.isEmpty();
    cout<<endl;
    cout<<q.isFull();
    cout<<endl;
    q.push(13); // 14 - 13
    q.push(91); // 14 - 13 - 91
    q.push(15); // 14 - 13 - 91 - 15
    q.showFront(); // 14
    q.push(31); // overflow
    cout<<q.isFull(); // 1
    cout<<endl; 
    q.pop(); // 13 - 91 - 15
    q.pop(); // 91 - 15
    q.showFront(); // 91

 return 0;
}