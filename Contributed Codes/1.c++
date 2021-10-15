#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
      int n,i,j,k,f=0;
      cin>>n;
     int a[n][5];
     for(i=0;i<n;i++)
     {
         for(j=0;j<5;j++)
         cin>>a[i][j];
     }
     if(n&1)
      {
          cout<<"NO"<<"\n";
          continue;
      }
     for(i=0;i<5;i++)
     {
         for(j=i+1;j<5;j++)
         {   
             int x=0,y=0,z=0;
             for(k=0;k<n;k++)
             {
                 if(a[k][i]==1)
                 x++;
                 if(a[k][j]==1)
                 y++;
                 if(a[k][i]==1&&a[k][j]==1)
                 z++;
             }
             x-=z;
             y-=z;

             if(x<=n/2&&y<=n/2&&x+y+z==n)
             f=1;
         }
     }
     if(f==0)
     cout<<"NO"<<"\n";
     else
     cout<<"YES"<<"\n";
    }
} 
