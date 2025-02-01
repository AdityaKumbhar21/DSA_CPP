#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}

// optimization
// Memoization
int f[10];
int fib(int n){
    if(n<=1){
        f[n] = n;
        return n;
    }
    else{
        if(f[n-2] == -1){
            f[n-2] = fib(n-2);
        }
        if(f[n-1] == -1){
            f[n-1] = fib(n-1);
        }
        f[n] = f[n-2] + f[n-1]; // for storing all the values in the array for future calls
        return f[n-2] + f[n-1];
        
    }
}

// If you want to print the series then print the array f 

int main()
{
    for(int i = 0;i<10;i++){
        f[i] = -1;
    }
    cout<<fibo(8)<<endl;
    cout<<fib(8)<<endl;
    cout<<fib(9);
 return 0;
}