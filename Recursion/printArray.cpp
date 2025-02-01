#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr, int n){
    if(n == 0){
        return;
    }
    print(arr,n-1);
    cout<<arr[n-1]<<" ";
}

int main()
{
    vector<int> arr = {4,5,10,13};
    print(arr,4);
 return 0;
}