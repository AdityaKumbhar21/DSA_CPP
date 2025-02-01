#include<bits/stdc++.h>
using namespace std;

void printAllSubArrays(vector<int> a){
    int n = a.size();
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            for(int k = i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    vector<int> a = {4,3,2,1};
    printAllSubArrays(a);
 return 0;
}