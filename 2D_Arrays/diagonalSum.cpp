#include<bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>> a, int row, int col){
    if(row == col){
    int sum = 0;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(i == j){
                sum += a[i][j];
            }
        }
    }
    return sum;
    }
    return -1;
}

int main()
{
    vector<vector<int>>a= {
        {1,2,3,5},
        {15,21,34,75},
        {11,22,35, 65},
        {11,22,35, 65},

    };

    cout<<diagonalSum(a, 4,4 );
 return 0;
}