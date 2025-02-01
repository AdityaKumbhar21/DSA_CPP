#include<bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> arr, vector<int> &ans, int ind, int n, int sum){
    if(ind == n){
        ans.push_back(sum);
        return;
    }

    subsetSum(arr,ans,ind+1,n,sum);
    sum+=arr[ind];
    subsetSum(arr,ans,ind+1,n,sum);
}


int main()
{
    vector<int> arr = {3,4,5};
    vector<int> ans;
    int sum = 0;
    subsetSum(arr,ans,0,arr.size(),sum);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
 return 0;
}