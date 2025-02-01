#include<bits/stdc++.h>
using namespace std;

// a -> source, c-> destination , b-> auxilary tower
void TOH(int n, int a, int b, int c){
    if(n>0){
        TOH(n-1, a, c , b);
        cout<<"From "<<a<<" to "<<c<<endl;
        TOH(n-1, b, a, c);

    }
}

int main()
{
    TOH(3,1,2,3);
 return 0;
}