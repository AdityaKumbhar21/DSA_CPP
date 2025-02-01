#include<bits/stdc++.h>
using namespace std;

bool isPresent(string s, string k){
        int n = s.size(), m  = k.size();
        vector<int> lps(m,0);
        int pre = 0, suff = 1;
        while(suff<m){
            if(k[pre] == k[suff]){
                lps[suff] = pre + 1;
                pre++;
                suff++;
            }
            else{
                if(pre == 0)
                    suff++;
                else{
                    pre = lps[pre-1];
                }
            }
        }

        int first = 0, second = 0;
        while(first<n && second <m){
            if(s[first] == k[second]){
                first++;
                second++;
            }
            else{
                if(second == 0)
                    first++;
                else{
                    second = lps[second-1];
                }
            }
        }

        if(second == m)
            return 1;
        else
            return 0;
    }


bool isPatternPresent(string &s, string &k){
    s += s;
    if(isPresent(s,k))
        return 1;
    
    return 0;
}


int main()
{
    string s = "cdeabroab";
    string k = "a";

    cout<<isPatternPresent(s,k);
 return 0;
}