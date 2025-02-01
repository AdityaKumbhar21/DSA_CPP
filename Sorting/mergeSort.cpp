#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
        int left = start, right = mid+1;
        vector<int> temp;
        while(left<=mid && right <= end){
            if(arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Remaining elements of left and right part
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right<=end){
            temp.push_back(arr[right]);
            right++;
        }

        // entering the elements of temp into arr

        int ind = 0;
        while(start<=end){
            arr[start] = temp[ind];
            ind++;
            start++;
        }
    }
    
    void mergeSort(vector<int> &arr, int start, int end){
        if(start == end)  // Base case when there is only single element
            return;
        int mid = start + (end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }

int main()
{
    vector<int> arr = {3,2,1,2,4,1,2,3,4,2,1,64,3,2};
    mergeSort(arr,0,arr.size()-1);
    for(auto it: arr){
        cout<<it<<" ";
    }cout<<endl;
 return 0;
}