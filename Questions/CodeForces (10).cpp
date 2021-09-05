#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    test
    {
        long long int n,c1=0,c2=0;
        cin>>n;
        if(n==1)
        {
            c1=1;
            c2=0;
        }
        else
        {
            //if(n%2==1)
            //{
                //c2=n/2;
                //c1=n-c2*2;
            //}
            //else
            //{
                if(n%3==0)
                {
                    c1=n/3;
                    c2=n/3;
                }
                else if(n%3==1)
                {
                    c2=n/3;
                    c1=c2+1;
                }
                else if(n%3==2)
                {
                    long long int temp=n;
                    temp=temp-2;
                    c1=temp/3;
                    c2=c1+1;
                }
            //}
        }
        cout<<c1<<" "<<c2<<"\n";
    }
    return 0;
}