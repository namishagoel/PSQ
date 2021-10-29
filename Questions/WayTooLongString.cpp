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
    string s;
    cin>>s;
    long long int n= s.size()-1;
    if(n>9)
        cout<<s[0]<<s.size()-2<<s[n]<<"\n";   
    else
        cout<<s<<"\n";
  }
  return 0;
}