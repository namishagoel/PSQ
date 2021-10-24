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
void dax()
{
        long long int n, k,flag=0,res;
        cin >> n;

        vector < long long int > a(n);
        
        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long long int l = 1, r = n - 2;
        if (n == 2) {
            res = 0;
            flag = 1;
        } else if (n == 3) {
            res =  min(a[1] - a[0], a[2] - a[1]);
            flag = 1;
        }

        if(flag==0){
        long long int res1 = 0, res2 = 0;
        for (long long int i = 0; i < n - 1; i++) {
            res1 += abs(a[i] - a[(n - 1) / 2]);
        }
        for (long long int i = 1; i < n; i++)
            res2 += abs(a[i] - a[1 + (n - 1) / 2]);
        
        long long int m = min(res1, res2);
        long long int dax1, dax2;
        while (l < r) {
            dax2 = a[n - 1] - a[l], dax1 = a[r] - a[0];
            m = min(m, abs(dax1 - dax2));
            if (dax1 < dax2)
                l++;
            else
                r--;
        }
        cout << m << "\n";
        }
        else if(flag == 1){
            cout << res <<"\n";
        }
}

int main() {
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    test {
            dax();
    }
    return 0;
}