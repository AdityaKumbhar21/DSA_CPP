#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

Node* createLL(vector<int>arr, int ind){
    if(ind == arr.size()){
        return NULL;
    }

    Node *temp = new Node(arr[ind]);
    temp->next = createLL(arr,ind+1);
    return temp;
}

void createCircular(Node *head){
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head;
    
}


void printLL(Node *head){
    Node *temp = head;
    while(temp->next != head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
    cout<<temp->next->data<<endl;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    Node *head = createLL(arr,0);
    createCircular(head);
    Node *temp = head;
    printLL(temp);

 return 0;
}