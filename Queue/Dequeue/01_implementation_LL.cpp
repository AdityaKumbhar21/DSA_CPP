#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node *next, *prev;
    
        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

class Dequeue{
        Node *front, *rear;
    public:
        Dequeue(){
            front = rear = NULL;
        }

        void push_front(int x){
            if(front == NULL){
                front = new Node(x);
                rear = front;
            }
            else{
                Node *temp = new Node(x);
                temp->next = front;
                front->prev = temp;
                temp->prev = front->prev;
                front = temp;
            }
        }

        void push_back(int x){
            if(rear == NULL){
                rear = new Node(x);
                front = rear;
            }
            else{
                Node *temp = new Node(x);
                rear->next = temp;
                temp->prev = rear;
                temp->next = rear->next;
                rear = temp;
            }
        }


        void pop_back(){
            if(front == NULL){
                cout<<"Queue is empty"<<endl;
                return;
            }
            if(front == rear){
                Node *temp = rear;
                rear = rear->prev;
                front = NULL;
                cout<<"Popped element: "<<temp->data<<endl;
                delete temp;
            }
            else{
                Node *temp = rear;
                rear = rear->prev;
                cout<<"Popped element: "<<temp->data<<endl;
                delete temp;
            }
        }

        void pop_front(){
            if(rear == NULL){
                cout<<"Queue is empty"<<endl;
                return;
            }
            if(front == rear){
                Node *temp = front;
                front = front->next;
                rear = NULL;
                cout<<"Popped element: "<<temp->data<<endl;
                delete temp;
            }
            else{
                Node *temp = front;
                front = front->next;
                cout<<"Popped element: "<<temp->data<<endl;
                delete temp;
            }
        }

        void showFront(){
            if(front == NULL){
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<front->data<<endl;
        }

        void showBack(){
            if(rear == NULL){
                cout<<"Queue is empty"<<endl;
                return;
            }
            cout<<rear->data<<endl;
        }
};

int main()
{
     Dequeue dq;
    dq.showBack();
    dq.showFront();
    dq.push_back(14); // 14   
    dq.push_back(13); // 14 - 13
    dq.push_back(91); // 14 - 13 - 91
    dq.push_front(15); // 15 - 14 - 13 - 91
    dq.showFront(); // 15
    dq.push_front(31); // 31 - 15 - 14 - 13 - 91
    dq.pop_back(); // 31 - 15 - 14 - 13
    dq.pop_front(); // 15 - 14 - 13
    dq.showFront(); // 15
    dq.push_back(33); // 15 - 14 - 13 - 33
    dq.showFront(); // 15
    dq.pop_front(); //  14 - 13 - 33
    dq.showBack(); // 33
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
 return 0;
}