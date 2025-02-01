#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int *arr;
    int size, front , rear;
    public:
        CircularQueue(int s){
            size = s;
            arr = new int[size];
            front = rear = -1;
        }

        bool isEmpty(){
            return front == -1;
        }

        bool isFull(){
            return (rear+1)%size == front;
        }

        void push(int x){
            if(isFull()){
                cout<<"Queue overFlow"<<endl;
                return;
            }
            if(isEmpty()){
                front = rear = 0;
                arr[0] = x;
            }
            else{
                rear = (rear + 1)%size;
                arr[rear] = x;
            }
        }

        void pop(){
            if(isEmpty()){
                cout<<"Queue underflow"<<endl;
                return;
            }
            else{
                cout<<"Popped element: "<<arr[front]<<endl;
                front = (front + 1)%size;
            }
        }

        void showFront(){
            if(isEmpty()){
                cout<<"Queue underflow"<<endl;
                return;
            }
            else{
                cout<<arr[front]<<endl;
            }
        }
};

int main()
{
     CircularQueue q(4);
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