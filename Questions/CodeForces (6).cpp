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
		long long int arr[n],temp[n];
		for(long long int i=0; i<n; i++)
			{
				cin>>arr[i];
				temp[i]=arr[i];
			}
		long long int max,min;
		sort(temp,temp+n);
		max=temp[n-1];min=temp[0];
		long long int index_max,index_min;
		for(long long int i=0; i<n; i++)
		{
			if(arr[i]==max)
				index_max=i;
			if(arr[i]==min)
				index_min=i;
		}
		long long int c1=0,c;
		if(index_max>index_min)
			c1=index_max+1;
		else
			c1=index_min+1;
		long long int c2;
		if(index_max>index_min)
		{
			c2=index_min+1+n-index_max;
		}
		else
		{
			c2=index_max+1+n-index_min;
		}
		long long int c3;
		if(index_max>index_min)
		{
			c3=n-index_min;
		}
		else
		{
			c3=n-index_max;
		}
		if(c1<c2&&c1<c3)
			c=c1;
		else if(c2<c3)
			c=c2;
		else
			c=c3;
		cout<<c<<"\n";
    }
    return 0;
}