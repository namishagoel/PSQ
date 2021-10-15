#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
            int n;
            cin>>n;
            if(n%2==0)
            {
            int a[n];
            for(int i=0;i<n;i+=2)
            a[i]=i+2;
            for(int i=1;i<n;i+=2)
            a[i]=i;
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
            }
            else
            {
                int a[n];
            for(int i=3;i<n;i++)
            a[i]=i+1;
            for(int i=4;i<n;i+=2)
            swap(a[i],a[i-1]);
            a[0]=3;
            a[1]=1;
            a[2]=2;
            for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl; 
            }
    }
}