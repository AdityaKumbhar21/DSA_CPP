#include<bits/stdc++.h>
using namespace std;

//  putting pivot in its correct positon.
int partition(vector<int> &arr, int start , int end){
    int pos = start;
    for(int i = start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void quickSort(vector<int> &arr,int start, int end){
        if(start>=end)
            return;
        int pivot = partition(arr,start,end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot,end);
}


int main()
{
    vector<int> arr = {3,2,1,2,4,1,2,3,4,2,1,64,3,2};
    quickSort(arr,0,arr.size()-1);
    for(auto it: arr){
        cout<<it<<" ";
    }cout<<endl;
 return 0;
}