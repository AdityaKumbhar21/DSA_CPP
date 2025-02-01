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

void insertAtPos(Node *temp, int x,int val){
   for(int i = 1;i<x;i++){
      temp = temp->next;
   }

   Node *temp2 = new Node(val);
   temp2->next = temp->next;
   temp->next = temp2;
}

int main()
{
    // Creating the head node
    Node *Head;
   Head = NULL;
    // Inserting in the start of the Linked List
   int arr[4] = {1,2,3,4};
   
    for (int i = 0; i < 4; i++)
    {
      // Checking if LL is empty
      if(Head == NULL){
         Head = new Node(arr[0]);
      }
      else{
         Node *temp = new Node(arr[i]);
         temp->next = Head;
         Head = temp;
      }
    }
    
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

    Node *temp = Head;
    printList(temp);


   //Insertion at the end
   int val = 10;

   if(Head == NULL){
      Head = new Node(val);
   }
   else{
      Node *tail = Head;
      while(tail->next != NULL){
         tail = tail->next;
      }
      Node *temp = new Node(val);
      tail->next = temp;
   }
   temp = Head;
   printList(temp);

   insertAtPos(temp,2,10);
   temp = Head;
   printList(temp);

   delete Head,temp;
    

 return 0;
}