#include<bits/stdc++.h>
using namespace std;

int rowWithMaxSum(vector<vector<int>> arr, int row, int col){
    int sum = INT_MIN, ans = -1;
    for(int i = 0;i<row;i++){
        int total = 0;
        for(int j = 0;j<col;j++){
            total += arr[i][j];

            if(total > sum){
                sum = total;
                ans = i;
            }
        }
    }
    cout<<sum<<endl;
    return ans;
}


int main()
{
    vector<vector<int>>a= {
        {1,2,3,5},
        {15,21,34,75},
        {11,22,35, 65}

    };
    cout<<rowWithMaxSum(a,3,4);
 return 0;
}