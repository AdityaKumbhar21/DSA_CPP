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

void insertAtEnd(Node *head,Node *temp){
    Node *curr = head;
    while(curr->next!= NULL){
        curr = curr->next;
    }
    temp->prev = curr;
    curr->next = temp;

}

Node* arrayToLL(Node * head, vector<int> arr, Node *tail){
    for(int i = 0;i<arr.size();i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node *temp = new Node(arr[i]);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}


Node * createDLLRec(int ind, vector<int> arr, Node *back){
    if(ind == arr.size())
        return NULL;
    
    Node *temp = new Node(arr[ind]);
    temp->prev = back;
    temp->next = createDLLRec(ind+1,arr,temp);
    return temp;

}

void insertAtPos(int pos, Node *head, Node *temp){


    // edge case
    if(pos == 0){
        if(head == NULL)
            head = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }


    pos--;
    Node *temp2 = head;
    while(pos--){
        temp2 = temp2->next;
    }

    if(temp2->next == NULL){
        temp2->next = temp;
        temp->prev = temp2;
    }
    else{
    temp->prev = temp2->prev;
    temp2->prev->next = temp;
    temp->next = temp2;
    temp2->prev = temp;
    }
}

void printLL(Node *temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main()
{
    // creating head node
    Node *head = new Node(31);
    
    // inserting at the start
    if(head == NULL){
        head = new Node(31);
    }
    else{
        Node *temp = new Node(19);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
    // Insertion at end

    Node *curr = head;
    while(curr->next != NULL)
        curr = curr->next;
    
    Node *temp = new Node(91);
    curr->next = temp;
    temp->prev = curr;

    cout<<temp->data<<" "<<temp->prev->data<<" "<<temp->next<<endl;

    
    vector<int> arr = {1,2,3,4,5};
    head = arrayToLL(NULL, arr,NULL);
    
    temp = head;
    printLL(temp);


    // Recursion
    head = createDLLRec(0,arr,NULL);
    temp = head;
    printLL(temp);

    // insert at any pos
    temp = new Node(44);
    insertAtPos(3,head,temp);
    temp = new Node(89);
    insertAtPos(6,head,temp);
    temp = new Node(11);
    insertAtPos(0,head,temp);
    temp = head;
    printLL(temp);

    
 return 0;
}