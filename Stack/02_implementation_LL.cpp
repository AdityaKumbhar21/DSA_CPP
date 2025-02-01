#include<bits/stdc++.h>
using namespace std;

// Node class
class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = NULL;
        }
};


class Stack{
    Node *top;
    int size;
        public:

            Stack(){
                top = NULL;
                size = 0;
            }

            int isSize(){
                return size;
            }

            bool isEmpty(){
                if(top == NULL)
                    return 1;
                else    
                    return 0;
            }

            int peek(){
                if(top == NULL){
                    cout<<"Stack is Empty"<<endl;
                    return -1;
                }
                else{
                    return top->data;
                }
            }
            void push(int val){
                size++;
                Node *temp = new Node(val);
                if(temp == NULL){
                    cout<<"Stack overflow"<<endl;
                    return;
                }
                else{
                    temp->next = top;
                    top = temp;
                }
            }

            void pop(){
                if(top == NULL){
                    cout<<"Stack is empty"<<endl;
                    return;
                }
                else{
                    size--;
                    Node *temp = top;
                    top = top->next;
                    delete temp;
                }
            }          
};


int main()
{
    Stack s;
    cout<<s.isEmpty()<<endl;
    s.push(4);       // 4
    cout<<"Top: "<<s.peek()<<endl;
    cout<<"Size: "<<s.isSize()<<endl;
    s.push(1);    // 4 1
    s.push(12);   // 4 1 12
    s.push(40);   // 4 1 12 40
    cout<<"Top: "<<s.peek()<<endl;
    cout<<"Size: "<<s.isSize()<<endl;
    s.pop();  // 4 1 12
    s.pop();  // 4 1 
    cout<<"Top: "<<s.peek()<<endl;
    cout<<"Size: "<<s.isSize()<<endl;
    cout<<s.isEmpty()<<endl;
 return 0;
}