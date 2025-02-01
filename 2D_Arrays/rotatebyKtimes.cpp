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

void rotateByK(vector<vector<int>> &arr, int k){
    if(k%4>0){
        k = k%4;
        while(k){
            rotateMatrixBy90(arr);
            k--;
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
    rotateByK(arr,4);
    display(arr);
 return 0;
}