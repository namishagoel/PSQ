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
        long long int n;
		cin>>n;
		long long int arr[n],sum=0;
        for(long long int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        long long int cyphen=sum/n;
        long long int count=0;
        for(long long int i=0; i<n; i++)
        {
            if(arr[i]>cyphen)
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}