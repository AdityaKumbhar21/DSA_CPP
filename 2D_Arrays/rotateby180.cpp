#include<bits/stdc++.h>
using namespace std;

void rotateMatrixBy180(vector<vector<int>> &arr){

    int n = arr.size();

    // reverse row wise
    for(int i = 0;i<n;i++){
        int start = 0 , end = n-1;
        while(start<=end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
        
    }

    // // swap column wise
    for(int col = 0;col<n;col++){
        int start = 0, end = n -1;
        while(start < end){
            swap(arr[start][col], arr[end][col]);
            start++;
            end--;
        }
        
    }
}

void display(vector<vector<int>> &arr){
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main()
{
    vector<vector<int>> arr = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    display(arr);
    rotateMatrixBy180(arr);
    display(arr);
 return 0;
}