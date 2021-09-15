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
    test
    {
        long long int n,s;
        cin>>n>>s;
        if(n<s)                      
        {
            int cyphen=s-n;
            cout<<abs(n-cyphen)<<"\n";
        }
        else if(n==s)
        {
            cout<<s<<"\n";
        }
        else if(n>s)
        {
            cout<<s<<"\n";
        }
    }
    return 0;
}