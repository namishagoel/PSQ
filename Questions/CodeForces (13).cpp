#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
test
{
    long long int n,k,ans=0;
    cin>>n>>k;
    long long int arr[n];
    for(long long int i=0; i<n; i++)
        cin>>arr[i];
    for(long long int i=1; i<n; i++)
        ans=max(ans,(i-1*i)-(k*(arr[i-1]|arr[i])));
    cout<<ans<<"\n";
}
return 0;
}