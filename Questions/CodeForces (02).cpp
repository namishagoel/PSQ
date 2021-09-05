 #include <bits/stdc++.h>
#define test long long int t; cin >> t; while (t--)
using namespace std;
int main() {
  //InputOutput
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //Testcases
  test
  {
      long long int n,ans=0;cin>>n;
      string pawn1,pawn2;
        cin>>pawn1;
        cin>>pawn2;
      for(long long int i=0; i<n; i++)
      {
        if(pawn2[i]=='0')
            continue;
        if(pawn1[i]=='1')
            {
                ans+=1;
                continue;
            }
        if(i-1>=0&&pawn1[i-1]=='1')
        {
            ans+=1;
            pawn1[i]='x';
           continue;
        }
        if(i+1<n&&pawn1[i+1]=='1')
        {
            ans+=1;
            pawn1[i]='x';
            continue;
        }
      }
      cout<<ans<<"\n";
  }
  return 0;
}