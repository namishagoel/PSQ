#include <bits/stdc++.h>
#define test int64_t t; cin>>t; while(t--)
using namespace std;
int main()
{
    int64_t n,y,vil=0,i=0;
    cin>>n>>y;
    int64_t a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    i=0;
    sort(a,a+n);
    sort(b,b+n);
    while(y!=0)
    {
        for(int64_t j=0; j<n; j++)
        {
            if(vil==a[j])
                {
                    y=y+b[j];
                }
        }
        vil++;
        y--;
    }
    cout<<vil;
    return 0;
}