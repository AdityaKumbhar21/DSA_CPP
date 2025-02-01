#include<bits/stdc++.h>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void printNoRem(queue<int> &q){
    vector<int> temp;
   while(!q.empty()){
        cout<<q.front()<<" ";
        temp.push_back(q.front());
        q.pop();
    }
    cout<<endl;
    for (int  i = 0; i < temp.size(); i++)
    {
        q.push(temp[i]);
    }
}

int main()
{
    queue<int> q;
    q.push(4);
    q.push(4);
    q.push(4);
    q.push(4);
    q.push(4);
    

   // print(q);

   // without popping the elements;
   // printNoRem(q);

   // without using the extra mem
   int n = q.size();
   while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }cout<<endl;

    cout<<q.size()<<endl;
 return 0;
}