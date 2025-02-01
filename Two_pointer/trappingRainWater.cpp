#include<bits/stdc++.h>
using namespace std;

int totalTrappedWaterB(vector<int> a){
    int waterTrapped = 0, n = a.size();

    for(int i = 0;i<n;i++){
        int j = i, leftMax = 0, rightMax = 0;

        while(j>=0){
            leftMax = max(leftMax, a[j]);
            j--;
        }

        j = i;
        while(j<n){
            rightMax = max(rightMax, a[j]);
            j++;
        }

        int supp = min(leftMax, rightMax) - a[i];

        if(supp >= 0){
            waterTrapped += supp;
        }
    }
    return waterTrapped;
}


int totalTrappedWaterBe(vector<int> arr){
    int waterTrapped = 0, n = arr.size();
    vector<int> leftMax(n), rightMax(n);
    leftMax[0] = 0;
    for(int i = 1;i<n;i++){
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
    }
    rightMax[n-1] = 0;
    for(int i = n-2;i>=0;i--){
        rightMax[i] = max(rightMax[i+1], arr[i+1]);
    }

    for(int i = 0;i<n;i++){
        int supp = min(leftMax[i], rightMax[i]) - arr[i];
        if(supp >= 0)
            waterTrapped += supp; 
    }

    return waterTrapped;
}


int totalTrappedWater(vector<int> arr){
    int leftMax = 0, rightMax = 0, waterTrapped = 0;
    int left = 0, right = arr.size()-1;
    while(left<=right){
        if(arr[left]<=arr[right]){
            if(arr[left] >= leftMax){
                leftMax = arr[left];
            }
            else{
                waterTrapped += leftMax - arr[left];
            }
            left++;
        }
        else{
            if(arr[right] >= rightMax){
                rightMax = arr[right];
            }
            else{
                waterTrapped += rightMax - arr[right];
            }
            right--;
        }
    }
    return waterTrapped;

    
}

int main()
{
    vector<int> a = {4,2,0,3,2,5};
    cout<<totalTrappedWaterB(a)<<endl;
    cout<<totalTrappedWaterBe(a)<<endl;
    cout<<totalTrappedWater(a)<<endl;
 return 0;
}