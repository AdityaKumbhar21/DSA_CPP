#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node *next;
        Node(){}
        Node(int val){
            data = val;
            next = NULL;
        }

};

int main()
{
    // Creating Statically
    Node A1;
    A1.data = 4;
    A1.next = NULL;

    // Creating a node Dynamically
    // Node *Head;
    // Head = new Node();
    // Head -> data = 4;
    // Head->next  = NULL;

    // Creating a node using Constructor
    Node *Head;
    Head = new Node(4);  // This will create a node Head -> 4 -> NULL

 return 0;
}