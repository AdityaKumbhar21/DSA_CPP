#include<bits/stdc++.h>
using namespace std;

void subsequences(string s, string temp, vector<string>& ans, int ind, int n){
    if(ind == n){
        ans.push_back(temp);
        return;
    }

    subsequences(s,temp,ans, ind+1, n);
    temp.push_back(s[ind]);
    subsequences(s,temp,ans,ind+1,n);
    temp.pop_back();
}


int main()
{
    string s = "abc";
    vector<string> ans ;
    string temp;
    int n = s.size();
    subsequences(s,temp,ans,0,n);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
 return 0;
}