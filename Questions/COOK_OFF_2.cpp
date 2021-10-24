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
      long long int n;
      cin>>n;
      long long int arr[n];
      for(int i = 0; i<n; i++)
      {
          cin>>arr[i];
      }

      sort(arr,arr+n);
        int res = 0;
      for(int i = 0; i<n; i++)
      {
          int lcount=0,rcount=0;
          for(int j = 0; j<n; j++)
          {
              if(i!=j)
              {
                  if(arr[j]<=arr[i])
                  {
                      lcount++;
                  }
                  else
                  {
                      rcount++;
                  }
              }
          }
          if(lcount>=rcount)
            res++;
      }
      cout<<res<<"\n";
  }
  return 0;
}