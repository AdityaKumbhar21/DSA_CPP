#include<bits/stdc++.h>
using namespace std;
int main()
{

    // normal var
    int a = 10;
    // pointer var
    int *ptr = &a;

    // printing the value and address
    cout<<a<<" "<<ptr<<endl;

    // printing the value stored at the address
    cout<<*ptr<<endl;

    a++;
    cout<<a<<" "<<ptr<<" "<<*ptr<<endl;

 return 0;
}