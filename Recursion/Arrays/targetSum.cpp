#include<bits/stdc++.h>
using namespace std;

void targetSum(vector<int> arr, vector<bool> &ans, int ind, int n, int sum, int target){
    if(ind == n){
        if(sum == target)
            ans.push_back(1);
        else    
            ans.push_back(0);
        
        return;
    }

    targetSum(arr,ans,ind+1,n,sum,target);
    sum+=arr[ind];
    targetSum(arr,ans,ind+1,n,sum,target);
}


int main()
{
    vector<int> arr = {3,4,5};
    vector<bool> ans;
    int sum = 0;
    targetSum(arr,ans,0,arr.size(),sum,99);
    int flag = 0;
    for(auto it: ans){
        if(it == 1){
            cout<<"True"<<endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout<<"False"<<endl;
    
    return 0;
}