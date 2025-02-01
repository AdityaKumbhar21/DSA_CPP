#include<bits/stdc++.h>
using namespace std;

bool is3SumB(vector<int> a, int target){
    int n = a.size();
    for(int i = 0;i<n-2;i++){
        for(int j = i + 1;j<n-1;j++){
            for(int k = j + 1;k<n;k++){
                if(a[i] + a[j] + a[k] == target)
                    return 1;
            }
        }
    }
    return 0;
}

bool is3SumBe(vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i = 0;i<n-2;i++){
        for(int j = i + 1;j<n-1;j++){
            int toFind = target - (arr[i]+arr[j]);
            int start = j + 1, end = n-1;
            while(start<=end){
                int mid = start + (end - start)/2;

                if(arr[mid] == toFind){
                    return 1;
                }
                else if(arr[mid] > toFind){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }

        }
    }
    return 0;
}

bool is3Sum(vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i = 0;i<n-2;i++){
       int target2 = target - arr[i];
       int start = i + 1, end = n-1;
       while(start < end){
            int sum = arr[start] + arr[end];
            if(sum == target2)
                return 1;
            else if(sum > target2)
                end--;
            else
                start++;
        }
    }
    return 0;
}




int main()
{
    vector<int> a = {4,8,45,10};
    cout<<is3SumB(a,57)<<endl;
    cout<<is3SumBe(a,58)<<endl;
    cout<<is3Sum(a,22)<<endl;
 return 0;
}