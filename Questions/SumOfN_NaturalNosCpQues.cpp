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
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    test
    {
        long long int n,s,cyph;
        cin>>n>>s;
        cyph=n*(n+1);
        long long int arr[n],sum=0;
        long long int ans=cyph/2;//SumOfArray
        if(s<ans-n || s>=ans)
            cout<<-1<<"\n";
        else
            cout<<ans-s<<"\n";
    }
    return 0;
}