//problem link:https://codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
          
        }
    }
    int a=0,b=0;
  for(int i=0;i<5;i++)
    {
        for(int j=1;j<=5;j++)
        {
           if(matrix[i][j]==1)
           {
                   a=abs(i-2);
                   b=abs(j-2);

           }
        }
    }
    cout<<a+b;
  
    return 0;
}
