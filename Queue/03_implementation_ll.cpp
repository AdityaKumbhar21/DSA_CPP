#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }

};

class Queue{
    Node *front, *rear;
    public:
        Queue(){
            front = NULL;
            rear = NULL;
        }

        void push(int x){
            if(front == NULL && rear == NULL){
                front = new Node(x);
                rear = front;
                return;
            }
            else{
                Node *temp = new Node(x);
                rear->next = temp;
                rear = rear->next;
            }
        }

        void pop(){
            if(front == NULL){
                cout<<"Queue underflow"<<endl;
                return;
            }
            Node *temp = front;
            cout<<"Popped Element: "<<temp->data<<endl;
            front = front->next;
            delete temp;
        }

        void showFront(){
            if(front == NULL){
                cout<<"Queue underflow"<<endl;
                return;
            }
            cout<<front->data<<endl;
        }
};

int main()
{
    Queue q;
    q.push(14); // 14   
    q.push(13); // 14 - 13
    q.push(91); // 14 - 13 - 91
    q.push(15); // 14 - 13 - 91 - 15
    q.showFront(); // 14
    q.push(31); // 14 - 13 - 91 - 15 - 31
    q.pop(); // 13 - 91 - 15 - 31
    q.pop(); // 91 - 15 - 31
    q.showFront(); // 91
    q.pop(); // 15 - 31
    q.showFront(); // 15
    q.pop(); //  31
    q.showFront(); // 31
 return 0;
}