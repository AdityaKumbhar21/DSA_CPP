#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}


int main()
{
    cout<<fact(4);
 return 0;
}