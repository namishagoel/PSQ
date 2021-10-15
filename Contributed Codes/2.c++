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
      int n,i,f=0;
      cin>>n;
      string s1,s2;
      cin>>s1>>s2;
      for(i=0;i<n;i++)
      {
      if(s1[i]=='1'&& s2[i]=='1')
      {
          f=1;
          break;
      }
    }
    if(f==1)
    {
        cout<<"NO"<<"\n";
        continue;
    }
    if(f==0)
    {
        cout<<"YES"<<"\n";
        continue;
    }
}
}