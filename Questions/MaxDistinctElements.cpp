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

bool compare(pair<long long int, long long int> &a, pair<long long int, long long int> &b)
{
    bool check;
    if(a.second < b.second)
        check=true;
    else
        check=false;
    return check;
}
void daxoron()
{
        long long int n, temp, i;cin >> n;
        vector<pair<long long int, long long int>> arr;

        for (i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(make_pair(temp, i));
        }

        long long int k = 0;
        sort(arr.begin(), arr.end());

        for (i = 0; i < n; i++)
        {
            if (arr[i].first > k)
            {
                arr[i].first = k;
                k++;
            }
            else if (arr[i].first == k)
                arr[i].first = k;
        }

        sort(arr.begin(), arr.end(), compare);

        for (i = 0; i < n; i++)
            cout << arr[i].first << " ";
}
int main()
{
  //InputOutput
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //Testcases
    test
    {
        daxoron();
        cout << "\n";
    }
    return 0;
}