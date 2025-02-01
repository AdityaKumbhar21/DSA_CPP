#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a = 10;
    int *p = &a;
    int **ptr = &p;

    // Changing the value of a using ptr
    *p = *p+4;
    cout<<*p<<" "<<a<<endl;

    // updating the value using double pointer
    **ptr = **ptr + 9;
    cout<<**ptr<<" "<<a<<endl;


    return 0;
}