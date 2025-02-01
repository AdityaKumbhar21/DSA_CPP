#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    cout<<s.empty()<<endl;
    s.push(4);       // 4
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    s.push(1);    // 4 1
    s.push(12);   // 4 1 12
    s.push(40);   // 4 1 12 40
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    s.pop();  // 4 1 12
    s.pop();  // 4 1 
    cout<<"Top: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<s.empty()<<endl;
    
 return 0;
}