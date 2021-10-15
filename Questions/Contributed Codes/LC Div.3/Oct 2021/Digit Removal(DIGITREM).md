>Problem Name : Digit Removal <br>
>Problem Code : DIGITREM <br>

## QUESTION LINK : https://www.codechef.com/OCT21C/problems/DIGITREM/

**Solution :**

```
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--)
	{
	    int n,d; cin>>n>>d;
      
	    int temp=n, ans=0, rem, ct=0;
	    while(temp>0)
	    {
	        rem = temp % 10 ;
	        temp = temp / 10 ;
	        ct++;
	        if(rem == d)
	        {
	            temp = temp * pow(10,ct) + (rem+1) * pow(10,ct-1);
	            ans = temp - n; 
	            ct=0;
	        }
	    }     
	    cout<<ans<<endl;
	}
	return 0;
}
```
