#include<bits/stdc++.h>
using namespace std;


class Stack{
    int top, size;
    int *arr;

    public:
        Stack(int s){
            top = -1;
            size = s;
            arr = new int[s];
        }

        bool isEmpty(){
            if(top == -1)
                return 1;
            else    
                return 0;
        }

        int sSize(){
            if(top == -1)
                return 0;
            
            return top+1;
        }

        void push(int element){
            if(top == size-1)
                cout<<"Stack overflow"<<endl;
            else{
                top += 1;
                arr[top] = element;
            }
        }

        void pop(){
            if(top == -1)
                cout<<"Stack Underflow"<<endl;
            else
                top -= 1;
        }

        int peek(){
           if(top == -1){
             cout<<"Stack is empty: "<<endl;
             return -1;
           }
           else{
                 return arr[top];
           }
        }
};

int main()
{
    Stack s(4);
    cout<<s.isEmpty()<<endl;
    s.push(4);       // 4
    cout<<"Top: "<<s.peek()<<endl;
    cout<<"Size: "<<s.sSize()<<endl;
    s.push(1);    // 4 1
    s.push(12);   // 4 1 12
    s.push(40);   // 4 1 12 40
    cout<<"Top: "<<s.peek()<<endl;
    cout<<"Size: "<<s.sSize()<<endl;
    s.push(40); //overflow
    s.pop();  // 4 1 12
    s.pop();  // 4 1 
    cout<<"Top: "<<s.peek()<<endl;
    cout<<"Size: "<<s.sSize()<<endl;
    cout<<s.isEmpty()<<endl;



 return 0;
}