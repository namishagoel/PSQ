#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    long long int a,b,c;
    cin>>a>>b>>c;
    if(c%2==0)
    {
    if(abs(a)==abs(b))
        cout<<"=";
    else if(abs(a)<abs(b))
        cout<<"<";
    else if(abs(a)>abs(b))
        cout<<">";
    }
    else
    {
        if(a==b)
            cout<<"=";
        else if(a<b)
            cout<<"<";
        else if(a>b)
            cout<<">";
    }
    return 0;
}