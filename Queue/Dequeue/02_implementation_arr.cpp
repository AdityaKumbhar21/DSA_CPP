#include<bits/stdc++.h>
using namespace std;

class Dequeue{
    int size, front , rear;
    int *arr;
    public:
        Dequeue(int s){
            size = s;
            arr = new int[s];
            front = rear = -1;
        }

        bool isFull(){
           return (rear + 1) % size == size;     
        } 

        bool isEmpty(){
            return front == -1;
        }     

        void push_front(int x){
            if(isEmpty()){
                front = rear = 0;
                arr[0] = x;
            }
            else{
                if((front - 1)%size == rear){
                     cout<<"Cannot add more elements in the front"<<endl;
                     return;
                }
                front  = (front - 1 + size)%size;
                arr[front] = x;
            }
        }

        void push_back(int x){
            if(isEmpty()){
                front = rear = 0;
                arr[0] = x;
            }
           if(isFull()){
                cout<<"Cannot add more elements"<<endl;
           }
           else{
                if((rear + 1)%size == front){
                    cout<<"Cannot add more elements in the back"<<endl;
                    return;
                }
                rear = (rear+1)%size;
                arr[rear] = x;
           }
        }

        void pop_front(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
        
            else{
                if(front == rear){
                    cout<<"Popped: "<<arr[front]<<endl;
                    front = rear = -1;
                    return;
                }
                cout<<"Popped: "<<arr[front]<<endl;
                front = (front + 1)%size;
            }
        }

        void pop_back(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return;
            }
            else{
                if(front == rear){
                    cout<<"Popped: "<<arr[front]<<endl;
                    front = rear = -1;
                    return;
                }
                cout<<"Popped element: "<<arr[rear]<<endl;
                rear = (rear - 1)%size;
            }
        }

        void showFront(){
            if(isEmpty()){
              
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<arr[front]<<endl;
        }

        void showBack(){
            if(rear == -1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<arr[rear]<<endl;
        }
};

int main()
{
    Dequeue dq(10);
    dq.push_back(41); // 41
    dq.push_back(1); // 41 - 1
    dq.push_back(11); // 41 - 1 - 11
    dq.pop_front(); // 41
    dq.push_front(31); // 31 - 1 - 11
    dq.showFront(); // 31
    dq.showBack(); // 11
    dq.push_front(31); // 31 - 31 - 1 - 11
    dq.showFront(); // 31
    dq.pop_back(); // 11
    dq.pop_front(); // 31
    // 31 - 1
 return 0;
}