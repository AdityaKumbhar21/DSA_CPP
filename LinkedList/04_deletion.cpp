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

void printList(Node *temp){
   // Traversing a linkedList
   while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
   
}

Node* createLL(int arr[],int ind, int n){
    if(ind == n)
        return NULL;
    
    Node *temp = new Node(arr[ind]);
    temp->next = createLL(arr,ind+1,n);

    return temp;
}

void deleteAtPos(Node *temp,int x){
    Node *prev = NULL;
    for(int i = 1;i<x;i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    cout<<"Deleted Node: "<<temp->data<<endl;
    delete temp;

}

int main()
{
    int arr[] = {1,2,3,4,5};
    Node *Head = createLL(arr,0,5);
    Node *temp = Head;
    printList(temp);
    cout<<"Head: "<<Head->data<<endl;
    // Deleting the first node
    Node *temp2 = Head;
    Head = Head->next;
    delete temp2;
    temp = Head;
    printList(temp);
    cout<<"Head: "<<Head->data<<endl;

    // Deleting the last node

     // Edge cases

     // If there LL is empty
     if(Head == NULL){
        cout<<"Cannot delete in empty linked list"<<endl;
     }
     // If there is only one element in the LL
     else if(Head->next == NULL){
        Node *temp = Head;
        delete temp;
        Head->next = NULL;
     }
     else{
        Node *tail = Head;
        Node *prev = NULL;
        while(tail->next != NULL){
            prev = tail;
            tail = tail->next;
        }
        cout<<"Deleted Node: "<<tail->data<<endl;
        delete tail;
        
        prev->next = NULL;
        temp = Head;
        printList(temp);
        cout<<"Head: "<<Head->data<<endl;
     }

     // delete a particular node
        Node *Head2 = createLL(arr,0,5);
        Node *temp3 = Head2;
        deleteAtPos(temp3,2);
        temp = Head2;
        printList(temp);
    
        

    delete Head,temp,Head2;

 return 0;
}