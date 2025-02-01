#include<bits/stdc++.h>
using namespace std;

// void reverseRowMatrix(vector<vector<int>>&a, int row, int col){
//     for(int i = 0;i<row;i++){
//         for(int j = col-1;j>=0;j--){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

void reverseRowMatrix(vector<vector<int>>&arr, int row, int col){

    for(int i = 0;i<row;i++){
        int start = 0, end = col - 1;
        while(start <= end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

int main()
{
    vector<vector<int>>a= {
        {1,2,3,5},
        {15,21,34,75},
        {11,22,35, 65}

    };
    reverseRowMatrix(a,3,4);

    for(int i = 0;i<3;i++){
        for(int j = 0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


 return 0;
}