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
        long long int n,i,j,count = 0;
        cin>>n;
        long long int temp[n];
        for(i=0; i<n; i++)
            cin>>temp[i];
        sort(temp,temp+n);
        long long int arr[n];
        j=0;
        for(i=0; i<n; i++)
        {
            if(temp[i]%2==0)
            {
                arr[j]=temp[i];
                j++;
                temp[i]=-1;
            }
        }
        int cyph=j;
        for(i=0; i<n; i++)
        {
            if(temp[i]!=-1)
            {
                arr[j]=temp[i];
                j++;
            }
        }
        for(i=cyph+1; i<n; i++)
        {
            if(arr[i-1]<arr[i])
                swap(arr[i-1],arr[i]);
        }
        for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(gcd(arr[i],2*arr[j])>1)
                        count++;
                }
            }
        //for(i=0; i<n; i++)
            //cout<<arr[i];
        cout<<count<<"\n";
    }
    return 0;
}