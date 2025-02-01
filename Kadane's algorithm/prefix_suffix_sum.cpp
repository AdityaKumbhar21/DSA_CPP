#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> a){
    int n = a.size();
    vector<int> pSum(n);
    pSum[0] = a[0];
    for(int i = 1;i<n;i++){
        pSum[i] = a[i] + pSum[i-1];
    }

    return pSum;
}
vector<int> suffixSum(vector<int> a){
    int n = a.size();
    vector<int> sSum(n);
    sSum[n-1] = a[n-1];
    for(int i = n-2;i>=0;i--){
        sSum[i] = a[i] + sSum[i+1];
    }

    return sSum;
}

void display(vector<int> a){
    int n = a.size();
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> a = {4,3,2,1};
    vector<int> ans = prefixSum(a);
    vector<int> ans2 = suffixSum(a);
    display(ans);
    display(ans2);
 return 0;
}