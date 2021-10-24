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

#define test long long int t;cin >> t;while (t--)
   using namespace std;
long long int powerOptimised(long long int a, long long int n) {

   // Stores final answer
   long long int ans = 1;

   while (n > 0) {

      long long int last_bit = (n & 1);

      // Check if current LSB
      // is set
      if (last_bit) {
         ans = ans * a;
      }

      a = a * a;

      // Right shift
      n = n >> 1;
   }

   return ans;
}
int main() {
   //InputOutput
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   //Testcases
   test {
      long long int n, k;
      cin >> n >> k;
      string st1 = "YES\n", st2 = "NO\n";
      if (k == 0) {
         cout << st1;
         cout << k << "\n";
      } else if (k % 2 == 0) {
         cout << st2;
      } else {
        //  long long int flag = 0, i = 1, steps = 0;
        //  long long int res = 1;
        //  while (res <= k) {
        //     if (k == res) {
        //        flag = 1;
        //     }

        //     res += powerOptimised(2, i);
        //     i++;
        //     steps++;
        //  }
        //  long long int arr[steps], j = 1, res_temp = 1, temp = k;
        //  arr[0] = k;
        //  i = 1;
        //  while (res_temp <= k) {
        //     if (k == res) {
        //        flag = 1;
        //     }

        //     res_temp += powerOptimised(2, i);
        //     temp = temp - powerOptimised(2, i);
        //     arr[j] = temp;
        //     j++;
        //     i++;
        //  }
         // if(flag==0)
         // {
         //     cout<<st2;
         // }
         // else if(flag==1)
         // {
         //     cout<<st1;
         //     cout<<steps<<"\n";
         //     for(long long int i = 0; i<steps; i++)
         //         cout<<arr[i]<<"\n";
         // }
         long long int res1 = 0;
         for (long long int i = 31; i >= 0; i--) {
            if (((1 << i) & k) != 0) {
               res1 = i + 1;
               break;
            }
         }
         k = (k + (1 << res1) - 1) / 2;
         cout << st1 << res1 << "\n";
         long long int res_f = 1;
         vector < long long int > vec;
         for (long long int i = res1 - 2; i >= 0; i--) {
            if (((1 << i) & k) != 0) {
               vec.push_back(res_f);
               res_f += (1 << i);
            } else {
               res_f -= (1 << i);
               vec.push_back(res_f);
            }
         }
         for (long long int i = res1 - 2; i >= 0; i--)
            cout << vec[i] << "\n";
         cout << res_f << "\n";
      }
   }
   return 0;
}