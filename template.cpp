/*

  |
,-| ,-. . , ,-. ,-. ,-. ,-.    
| | ,-|  X  | | |   | | | |    
`-' `-^ ' ` `-' '   `-' ' ' 



    | |                                 
  __| | __ ___  _____  _ __ ___  _ __   
 / _` |/ _` \ \/ / _ \| '__/ _ \| '_ \  
| (_| | (_| |>  < (_) | | | (_) | | | | 
 \__,_|\__,_/_/\_\___/|_|  \___/|_| |_| 



  _____     ____      __ __    _____    _____     _____    ____   _    
 |     \   |    \     \ ` /   /     \  |     |   /     \  |    \ | |   
 |      \  |     \    /   \   |     |  |     \   |     |  |     \| |   
 |______/  |__|\__\  /__/\_\  \_____/  |__|\__\  \_____/  |__/\____|

 
*/
#include <bits/stdc++.h>
#define test long long int t; cin >> t; while (t--)
using namespace std;
int main(){
  //InputOutput
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //Testcases
  test
  {
      long long int n,d,c,m,i,count_d=0;
      cin>>n>>d>>c>>m;
      string st;
      cin>>st;
      for(i = 0; i<n; i++)
      {
          if(st[i]=='D')
          {
            count_d++;
          }
      }
      int flag = 1;
      for(i = 0; i<n; i++)
      {
        if(flag==-1)
          break;
        if(st[i]=='D')
        {
          if(d==0)
            flag=-1;
          else if(d>0)
          {
            d--;
            c+=m;
            count_d--;
          }
        }
        else if(st[i]=='C')
        {
          c--;
        }
      }
  }
  return 0;
}