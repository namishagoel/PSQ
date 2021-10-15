#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,f=0;
        cin>>n>>x;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
        cin>>a[i];
        b[i]=a[i];
        }
        sort(b,b+n);
        for(ll i=0;i<n-1;i++)
        {
          if(a[i]!=b[i])
          {
              if(i>=x||(n-i-1)>=x)
              {
                  continue;
              }
              else
              {
                  f=1;
                  break;
              }
              
              
          }
        }
        if(f==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
        
        
    }
}