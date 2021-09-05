#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    long long int n,m;
    cin>>n>>m;
    long long int arr [n][2];
    for(long long int i=0; i<n; i++)
        for(long long j=0; j<2; j++)
            cin>>arr[i][j];
    long long int sum=0;
    sum+=n+m;
    
    return 0;
}