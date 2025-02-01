#include<bits/stdc++.h>
using namespace std;


void printWaveForm(vector<vector<int>> arr){
    int row = arr.size(), col = arr[0].size();

    for(int i = 0;i<col;i++){
        if(i%2==0){
            for(int j = 0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
           for(int j = row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            } 
        }
    }cout<<endl;
}

int main()
{
    vector<vector<int>> a = {
        {4,5,8,10},
        {13,80,91,25},
        {36,4,3,2}

    };
    printWaveForm(a);
 return 0;
}