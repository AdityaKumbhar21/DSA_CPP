#include<bits/stdc++.h>
using namespace std;



int main()
{

    // Creating a 1D array using pointers.
    int *arr = new int[5]; // Creates an dynamic array, whose memory is allocated in the Heap.

    for(int i =0;i<5;i++){
        arr[i] = i*2;
    }

    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    // Creating a 2D array using pointers
    int **a = new int *[4];
    for(int i = 0;i<4;i++){
        a[i] = new int[3];
    }

    for(int i = 0;i<4;i++){
        for(int j = 0;j<3;j++){
            a[i][j] = 8;
        }
        
    }

    
    for(int i = 0;i<4;i++){
        for(int j = 0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

 return 0;
}