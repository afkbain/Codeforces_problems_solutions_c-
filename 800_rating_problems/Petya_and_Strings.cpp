//problem link:https://codeforces.com/problemset/problem/112/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    int flag=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    for(int i=0;i<s1.length();i++)
    {   if(s1[i]==s2[i])
        {
            flag=flag+1;

        }
        if(s1[i]<s2[i])
        {
            cout<<"-1"<<endl;
            break;
        }
        if(s1[i]>s2[i])
        {
        cout<<"1"<<endl;
        break;
        }
        
    }
    if(flag==s1.length())
    {
        cout<<"0"<<endl;
    }
    return 0;
}
