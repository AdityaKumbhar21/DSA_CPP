#include<bits/stdc++.h>
using namespace std;

void rotateBy2Clk(string &str){
    char c1 = str[str.size()-1];
    char c2 = str[str.size()-2];

    for(int i = str.size()-3;i>=0;i--){
        str[i+2] = str[i];
    }

    str[0] = c2;
    str[1] = c1;
}


void rotateBy2AClk(string &str){
    char c1 = str[0];
    char c2 = str[1];

    for(int i = 2;i<str.size();i++){
        str[i-2] = str[i];
    }

    str[str.size()-1] = c2;
    str[str.size()-2] = c1;
}

int main()
{

    string s = "Hello";
    cout<<s<<endl;

    rotateBy2Clk(s);
    cout<<s<<endl;

    string s2 = "Hello";
    cout<<s2<<endl;
    rotateBy2AClk(s2);
    cout<<s2<<endl;
 return 0;
}