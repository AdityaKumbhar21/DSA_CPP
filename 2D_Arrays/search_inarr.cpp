#include<bits/stdc++.h>
using namespace std;

bool searchIn2d(int arr[][4], int row, int col, int x){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j] == x){
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int a[3][4] = {
        {1,2,3,5},
        {15,21,34,75},
        {11,22,35, 65}

    };
    cout<<searchIn2d(a, 3,4,50);
 return 0;
}