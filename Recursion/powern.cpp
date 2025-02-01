#include<bits/stdc++.h>
using namespace std;

int power(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return power(m, n-1)*m;
    }
}

// optimal approach
int pow(int n, int m){
    if(m == 0){
        return 1;
    } 
    else if(m%2==0){
        return pow(n*n, m/2);
    }
    else{
        return n * pow(n*n,m/2);
    }

}

int main()
{
    cout<<power(2,3)<<endl;
    cout<<power(2,5);
 return 0;
}