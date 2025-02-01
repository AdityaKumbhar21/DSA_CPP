#include<bits/stdc++.h>
using namespace std;

int maxDifference(vector<int> a){
    int n = a.size();
    int suffixMax = a[n-1];
    int ans = INT_MIN;
    for(int i = n-1;i>=0;i--){
        int diff = a[i] - suffixMax;
        ans = max(ans, diff);
        suffixMax = max(suffixMax, a[i]);
    }
    return ans;
}

int main()
{
    vector<int> a = {9,5,8,12,2,3,7,4};
    cout<<maxDifference(a);
 return 0;
}