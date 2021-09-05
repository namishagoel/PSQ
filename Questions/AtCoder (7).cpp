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
    long long int n,a=0,b=0,i=0,temp=0;
    cin>>n;
    vector<int> v(n);
    for(long long int k=0; i<n; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
    sort(v.begin(),v.end(),greater<int>());
    while(n){
        if(b<a) b += v[i];
        else a += v[i];
        i++; n--;
    }
    if (a>b) cout<<a;
    else cout<<b;
    return 0;
}