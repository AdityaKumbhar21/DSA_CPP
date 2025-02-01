#include<bits/stdc++.h>
using namespace std;

void rotateMatrixBy90(vector<vector<int>> &arr){
    int n = arr.size();

    // Transpose of the matrix
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reverse Row wise
    for(int i = 0;i<n;i++){
           int start = 0, end = n-1;
           while(start<=end){
                swap(arr[i][start], arr[i][end]);
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
        {4,9,15,25},
        {3,4,2,8},
        {17,14,11,10},
        {6,2,57,99}
    };

    display(arr);
    rotateMatrixBy90(arr);
    display(arr);
 return 0;
}