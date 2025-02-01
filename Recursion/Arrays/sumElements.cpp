#include<bits/stdc++.h>
using namespace std;

int sumEle(vector<int>arr, int n, int ind){
    if(ind == n){
        return 0;
    }
    return arr[ind] + sumEle(arr,n,ind+1);

}

int main()
{
    vector<int> arr = {4,5,10,13};
    cout<<sumEle(arr,4,0);
 return 0;
}