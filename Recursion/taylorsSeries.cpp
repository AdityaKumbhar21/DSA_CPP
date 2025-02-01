#include<bits/stdc++.h>
using namespace std;

double e(int x, int n){
    static double p = 1, f =1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r = e(x,n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

// optimal 
double taylor(int x, int n){
    static double s = 1;
    if(n==0){
        return s;
    }
    else{
        s = 1+x*s/n;
        return taylor(x,n-1);
    }
}


int main()
{
    cout<<e(4,4)<<endl;
    cout<<taylor(4,4);
    return 0;
}