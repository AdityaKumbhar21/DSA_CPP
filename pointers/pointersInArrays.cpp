#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4] = {48,71,36,21};

    int *ptr = &arr[2];
    cout<<*ptr<<" "<<ptr<<endl;

    // printing all the values and addresses.
    for(int i = 0;i<4;i++){
        cout<<*(arr+i)<<" "<<arr+i<<endl;
    }

    int *ptr1 = arr;
    for(int i = 0;i<4;i++){
        cout<<ptr1[i]<<endl;
    }


 return 0;
}