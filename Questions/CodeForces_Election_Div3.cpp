#include <bits/stdc++.h>
#define test long long int t; cin >> t; while (t--)
using namespace std;
int main()
{
  //InputOutput
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //Testcases
  test
  {
      long long int a,b,c;
      cin>>a>>b>>c;
      long long int a1,b1,c1;
      long long int maximum = max({a,b,c});
      a1 = maximum - a;
      b1 = maximum - b;
      c1 = maximum - c;

        if(a1!=0)
            a1++;
        if(b1!=0)
            b1++;
        if(c1!=0)
            c1++;

        if(a==b)
        {
            if(b==c)
            {
                a1=1;
                b1=a1;
                c1=a1;
            }
        }

        if((a1 == 0 && b1==0)||(a1==0 && c1 == 0)||(b1==0 && c1 == 0))
        {
            long long int temp = max({a1,b1,c1});

            if(a==b)
            {
                a1 = 1;
                b1 = 1;
            }
            else if(a==c)
            {
                a1 = 1;
                c1 = 1;
            }
            else if(b==c)
            {
                b1 = 1;
                c1 = 1;
            }
        }
      cout<<a1<<" "<<b1<<" "<<c1<<"\n";
  }
  return 0;
}