#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll cnt=0;
        ll n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        s+='2';
        s1+='3';
        for(ll i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            cnt+=2;
            else if(s[i]!=s[i+1]&&s1[i]!=s1[i+1]&&s[i]==s1[i]&&s[i+1]==s1[i+1])
            {
            cnt+=2;
            i++;
            }
           else if(s[i]=='0'&&s1[i]=='0')
            cnt++;
        }
        cout<<cnt<<endl;
    }
}