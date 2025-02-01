#include<bits/stdc++.h>
using namespace std;

bool check(string &s){
    stack<char> st;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '(')
            st.push(s[i]);
        else{
            if(st.empty())
                return 0;
            else    
                st.pop();
        }
    }

    if(st.empty())
        return 1;
    else    
        return 0;
}

bool validOp(string s){
    int left = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == '(')
            left++;
        else{
            if(left == 0)
                return 0;
            else
                left--;
        }
    }
    return left == 0;
}

int main()
{
    string s = "()()()";
    cout<<check(s)<<endl;
    cout<<validOp(s);
 return 0;
}