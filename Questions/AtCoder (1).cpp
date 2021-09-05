#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    long long int n,q,i;
    cin>>n>>q;

    long long int arr[n],qrr[q];
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=0; i<q; i++)
        cin>>qrr[i];

    sort(qrr,qrr+q);
    sort(arr,arr+n);

    long long int count=0,j=0,k=0,rem=0;
    count=n+qrr[q-1];
    long long int a[count];
    for(i=1; i<=count; i++)
    {
        if(i==arr[j])
        {
            j++;
            i++;
            rem++;
        }
        else
        {
            a[k]=i;
            k++;
        }
    }
    for(i=0; i<k; i++)
    {
        cout<<a[i]
    }
    return 0;
}