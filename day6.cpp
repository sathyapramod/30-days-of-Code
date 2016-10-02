#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

void printString(string s)
{
     for(int i=0;i<s.size();i+=2)
      {
        cout<<s[i];
      }
     cout<<" ";
     for(int i=1;i<s.size();i+=2)
      {
       cout<<s[i];
      }
    cout<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
     {
      string str;
      cin>>str;
      printString(str);
     }
    return 0;
}
