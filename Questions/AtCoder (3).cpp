#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    long long int n,k,sum=0;
    cin>>n>>k;
    for(long long int i=1; i<=n; i++)
    {
        long long int flag=100*i;
        long long int org=flag;
        for(long long int j=1; j<=k; j++)
        {
            flag=org;
            flag+=j;
            sum+=flag;
        }
    }
    cout<<sum;
    return 0;
}