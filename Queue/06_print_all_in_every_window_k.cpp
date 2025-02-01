#include<bits/stdc++.h>
using namespace std;


void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
}

void printAll(vector<int> arr, int k){
    int n = arr.size();
    queue<int>q;
    for(int i = 0;i<k-1;i++){
        q.push(arr[i]);
    }
    
    for(int i = k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();
        
    }
}

int main()
{
    vector<int> arr = {3,6,8,2,7,8,11};
    printAll(arr,2);
 return 0;
}