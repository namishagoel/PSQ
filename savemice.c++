#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n,k,i,c=0;
      cin>>n>>k;
      vector<ll>a(k);
      for(i=0;i<k;i++)
      cin>>a[i];
      sort(a.begin(),a.end());
      ll w=0;
      for(i=k-1;i>=0;i--)
      {
          if(w>=a[i])
          break;
          ll k=n-a[i];
          c++;
          w+=k;
      }
      cout<<c<<"\n";
    }
}