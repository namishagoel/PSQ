#include <bits/stdc++.h>
#define test long long int t; cin >> t; while (t--)
using namespace std;
int main() {
  //InputOutput
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //Testcases
  test {
      long long int n;
      cin>>n;
      if(n%2==0)
      {
          cout<<2<<" "<<n;
      }
      else
      {
          cout<<2<<" "<<n-1;
      }
    cout<<"\n";
  }
  return 0;
}