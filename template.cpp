#include <bits/stdc++.h>
#define test long long int t; cin >> t; while (t--)
using namespace std;
int main()
{
  //InputOutput
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //Testcases
  int counta=0,countd=0,counte=0,countf=0,countn=0;
  string str;
  cin>>str;
  for(int i=0; i<str.size(); i++)
  {
    if(str[i]=='a')
      counta++;
    else if(str[i]=='d')
      countd++;
    else if(str[i]=='e')
      counte++;
    else if(str[i]=='f')
      countf++;
    else if(str[i]=='n')
      countn++;
  }
  cout<<"team a: "<<counta<<"\n";
  cout<<"team d: "<<countd<<"\n";
  cout<<"team e: "<<counte<<"\n";
  cout<<"team f: "<<countf<<"\n";
  cout<<"team n: "<<countn<<"\n";
  
  return 0;
}