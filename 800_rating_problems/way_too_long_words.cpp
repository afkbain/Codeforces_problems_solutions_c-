//problem link:https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {      int count=0;
           string s;
           cin>>s;
           if(s.length()>10)
           {
              cout<<s[0];
              for(int i=1;i<s.length()-1;i++)
              {
                count++;
              }
              cout<<count;
              cout<<s[s.length()-1];
              cout<<endl;
           }
           else 
           cout<<s<<endl;
    }
    return 0;
}
