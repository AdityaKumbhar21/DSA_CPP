#include<bits/stdc++.h>
using namespace std;


bool find4Numbers(int A[], int z, int target)  
{
    vector<int> arr(A, A+z);
    int n = arr.size();
    for(int i = 0;i<n-2;i++){
        for(int j = i + 1;j<n-1;j++){
           int target2 = target - (arr[i]+arr[j]);
           int start = j + 1, end = n-1;
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
    }
    return 0;
    
}

int main()
{
    int a[] = {1,5,1,0,6,0};
    cout<<find4Numbers(a,6,7)<<endl;
 return 0;
}