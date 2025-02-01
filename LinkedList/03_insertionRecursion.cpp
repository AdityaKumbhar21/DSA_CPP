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


Node* CreateLinkedList(int arr[], int ind, int n){

    if(ind == n){
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->next = CreateLinkedList(arr,ind+1,n);

    return temp;
}

Node* createLLB(int arr[],int ind,int n, Node* prev){
    if(ind == n)
        return prev;
    Node* temp = new Node(arr[ind]);
    temp->next = prev;

    return createLLB(arr,ind+1,n,temp);
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
    Node *Head;
    Head = NULL;

    int arr[] = {1,2,3,4};
    Head = CreateLinkedList(arr,0,4);
    cout<<Head->data<<endl;
    Node *temp = Head;
    printList(temp);

    Node* Head2 = NULL;
    Head2 = createLLB(arr,0,4,NULL);
    temp = Head2;
    printList(temp);
    delete Head;
    delete Head2;
    delete temp;
    

 return 0;
}