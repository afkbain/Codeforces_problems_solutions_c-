//problem link: https://codeforces.com/contest/2266/problem/A

 #include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     while(a--)

     {
          int parti;
          cin>>parti;
          int array[3];
          for(int i=0;i<3;i++)
          {
            cin>>array[i];
          }
          int min=array[0];
          for(int i=0;i<3;i++)
          {
              if(array[i]<min)
              {
                min=array[i];
              }


          }
          cout<<parti-min<<endl;



     }


    return 0;
}
