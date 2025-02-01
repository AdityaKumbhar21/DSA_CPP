#include<bits/stdc++.h>
using namespace std;

bool isPossibleB(vector<int> a){
    int n = a.size();
    for(int i = 0;i<n;i++){
        int sum1 = 0, sum2 = 0;
        for(int j = 0;j<=i;j++){
            sum1 += a[j];
        }
        for(int j = i+1;j<n;j++){
            sum2 += a[j];
        }

        if(sum1 == sum2){
            return 1;
        }
    }
    return 0;
}

// prefix Sum concept
bool isPossible(vector<int> a){
    int prefixSum = 0, totalSum = 0, n = a.size();
    for(int i = 0;i<n;i++){
        totalSum += a[i];
    }

    for(int i = 0;i<n;i++){
        prefixSum += a[i];
        int ans = totalSum - prefixSum;
        if(ans == prefixSum)
            return 1;
    }
    return 0;
}

int main()
{
    vector<int> a = {3,4,-2,5,8,20,-10,8};
    cout<<isPossibleB(a)<<endl;
    cout<<isPossible(a);
 return 0;
}