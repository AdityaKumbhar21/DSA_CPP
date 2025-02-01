#include<bits/stdc++.h>
using namespace std;
int main()
{
  // Declaration and initialization
  string str = "Hello World!";
  cout<<str<<endl;


// Taking input as a string, this will only take a text/word as an input and won't consider space or tab as an input.
  string s;
  cin>>s;
  cout<<s<<endl;

// Taking a whole sentence as an input.
   string s1;
   cout<<endl;
   getline(cin, s1);
   cout<<s1<<endl;


//  Size of the string
    cout<<str.size()<<endl;

    for(int i = 0;i<str.size();i++){
        cout<<str[i]<<" ";
    }cout<<endl;
  return 0;
}