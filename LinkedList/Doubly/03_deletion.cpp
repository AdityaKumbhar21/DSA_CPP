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


Node * createDLLRec(int ind, vector<int> arr, Node *back){
    if(ind == arr.size())
        return NULL;
    
    Node *temp = new Node(arr[ind]);
    temp->prev = back;
    temp->next = createDLLRec(ind+1,arr,temp);
    return temp;

}

void printLL(Node *temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

Node* deleteAtPos(Node *head, int pos){


    if(head != NULL){
        if(pos == 1 || head->next == NULL){
            Node *temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            return head;
        }

        else{
            pos--;
            Node *curr = head;
            while(pos--){
                curr = curr->next;
               
            }
            if(curr->next == NULL){
                curr->prev->next = NULL;
                delete curr;
                return head;
            }
            else{
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
            return head;
            }
        }
    }
    else{
        cout<<"LL is empty"<<endl;
        return NULL;
    }
}

int main()
{
    // creating head node
    Node *head;
    head = NULL;

    vector<int> arr = {1,2,3,4,5};
    head = createDLLRec(0,arr,NULL);
    Node *temp = head;
    printLL(temp);

    // Deletion at start
    if(head != NULL){
        temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        temp = head;
        printLL(temp);
    }

    // Deletion at end
    if(head != NULL){
        Node *curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
    }
    temp = head;
    printLL(temp);

    // Deletion at any point
    head = createDLLRec(0,arr,NULL);
    head = deleteAtPos(head, 5);
    temp = head;
    printLL(temp);



 return 0;
}