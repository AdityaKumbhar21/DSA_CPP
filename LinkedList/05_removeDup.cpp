#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data =val;
            next = NULL;
        }
};

Node *removeDuplicates(Node *head){
    Node *curr = head, *prev = NULL;
        while(curr->next != NULL){
            if(head->data == head->next->data){
                head = head->next;
                prev = curr;
                curr = head;
            }
            else if(curr->next->data == curr->data){
                curr->next = curr->next->next;
                prev = curr;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        if(curr->data == prev->data){
                prev->next = NULL;
            }
        
        
        return head;
}

Node* CreateLinkedList(int arr[], int ind, int n){

    if(ind == n){
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->next = CreateLinkedList(arr,ind+1,n);

    return temp;
}

void printList(Node *temp){
   // Traversing a linkedList
   while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
   
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    Node *head = CreateLinkedList(arr,0,9);
    Node *temp = head;
    printList(temp);
    temp = head;
    head = removeDuplicates(temp);
    temp = head;
    printList(temp);


 return 0;
}