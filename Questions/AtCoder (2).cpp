#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{

    long long int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&a==c)
        cout<<a;
    else if((a==b)&&(a!=c))
        cout<<c;
    else if((a==c)&&(a!=b))
        cout<<b;
    else if((b==c)&&(b!=a))
        cout<<a;
    else if((a!=b)&&(a!=c))
    {
        if(b!=c)
            cout<<0;
    }
    return 0;
}