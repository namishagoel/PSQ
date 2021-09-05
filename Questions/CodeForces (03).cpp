#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    test
    {
        int arr[4];
        for(int i=0; i<4; i++)
            cin>>arr[i];
        int a,b;
        if(arr[0]<arr[1])
            a=arr[1];
        else
            a=arr[0];
        
        if(arr[2]<arr[3])
            b=arr[3];
        else
            b=arr[2];
        sort(arr,arr+4);
        if((a+b)==arr[2]+arr[3])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}