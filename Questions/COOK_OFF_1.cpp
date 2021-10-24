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
      long long int n,l,x;
      cin>>n>>l>>x;
      long long int right;
      right = n - l;
      long long int pair;
      pair = min(l,right);
      long long int price;
      price = pair * x;
      cout<<price<<"\n";   
  }
  return 0;
}