//problem link:https://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int count=0;
    while(a--)
{
    string s;
    cin>>s;
    if(s=="X++" || s=="++X")
    { count++;

    }
    else
    count--;
}
cout<<count;
    return 0;
}
