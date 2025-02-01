#include<bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int> q1, q2;
public:
    MyStack() {
        
    }
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int n = q1.size();
        while(n--){
            q2.push(q1.back());
        }
        int popped = q2.front();
        q2.pop();
        n = q2.size();
        while(n--){
            q1.push(q2.back());
        }
        return popped;
    }
    
    int top() {
        int n = q1.size();
        while(n--){
            q2.push(q1.back());
        }
        int top = q2.front();
        n = q2.size();
        while(n--){
            q1.push(q2.back());
        }
        return top;
    }
    
    bool empty() {
        return q2.empty();
    }
};

int main()
{
    MyStack s;
    s.push(4);
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
 return 0;
}