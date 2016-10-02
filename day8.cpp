#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() 
{
    map<string,string>phonebook;
	string name;
        string phone;
	int n; cin>>n; 
    for(int i=0;i<n;i++)
     {
      cin>>name;
      cin.ignore();
      cin>>phone;
      cin.ignore();
       phonebook[name]=phone;
     } 
    while(getline(cin,name))
     {
       if(name.empty())
        break;
       if(phonebook.count(name)==1)
        {
          cout<<name<<"="<<phone<<endl;
        }
       else
         {
           cout<<"Not found" <<endl;
         }
     }
    return 0;
}
