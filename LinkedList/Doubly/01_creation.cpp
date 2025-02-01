#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

int main()
{
    // creating head node
    Node *head = new Node(31);

    cout<<head->data<<endl;
    
 return 0;
}