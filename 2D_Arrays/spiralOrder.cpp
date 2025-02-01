#include<bits/stdc++.h>
using namespace std;

 vector<int> spiralOrder(vector<vector<int>>& arr) {
         int top = 0, left = 0, right = arr[0].size()-1, bottom = arr.size()-1;
        vector<int> ans;
        while(top<=bottom && left <= right){
            // Left to right
            for(int i = left;i<=right;i++){
                ans.push_back(arr[top][i]);
            }
            top++;
            
            // top to bottom
            for(int i = top;i<=bottom;i++){
                ans.push_back(arr[i][right]);
            }
            right--;

            // right to left
            if(top<=bottom){
            for(int i = right;i>=left;i--){
                ans.push_back(arr[bottom][i]);
            }
            }
            bottom--;

            // bottom to top
            if(left<=right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(arr[i][left]);
            }
            }
            left++;
        }
        return ans;
    }

int main()
{
    vector<vector<int>> a = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}

    };
    vector<int> ans = spiralOrder(a);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
 return 0;
}