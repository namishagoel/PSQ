#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
long long int sum(long long int n, long long int arr[])
{
    long long int sum1=0;
    for(long long int i=0; i<n; i++)
    {
        sum1+=arr[i];
    }
    return sum1;
}
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
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0; i<n; i++)
            cin>>arr[i];
        if(sum(n,arr)>=0)
        {
            if(sum(n,arr)<n)
                cout<<1<<"\n";
            else
                cout<<sum(n,arr)-n<<"\n";
        }
        else
            cout<<1<<"\n";
    }
    return 0;
}