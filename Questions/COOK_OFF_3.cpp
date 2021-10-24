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
      //PrefixSum or Maybe Kadanes Algorithm
      cin>>n;
    //   long long int arr[n];
      long long int odd_sum,odd=1,prev_sum=0,prev_element=0;
    //   for(long long int i = 0; i<n; i++)
    //     arr[i]=i;

    //     for(long long int i = 0; i<n; i++)
    //     {
    //         int element=arr[i];
    //         prev_sum+=element+prev_element;
    //         if(prev_sum%2==1)
    //             odd_sum+=prev_sum-1;
    //         else
    //         {
    //             prev_sum-=element-1;
    //         }
    //         prev_element=element-1;
    //     }
    odd_sum = ((n-1)*(n-1)) + n;
        if(n<3)
            cout<<odd<<"\n";
        else
            cout<<odd_sum<<"\n";
  }
  return 0;
}