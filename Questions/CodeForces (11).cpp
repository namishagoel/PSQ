#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
test
{
    string str;
    cin>>str;
    long long int count=0,check=0;
    unordered_map<char, int> cyphen;
	for (int i = 0; str[i]; i++)
	{
		if (cyphen.find(str[i]) == cyphen.end())
			cyphen.insert(make_pair(str[i], 1));
		else
			cyphen[str[i]]++;
	}

	for (auto& it : cyphen)
    {
        //count+=it.second;
        if(it.second>=2)
            count++;
        else if(it.second==1)
            check++;
	}
    count=count+check/2;
    cout<<count<<"\n";
}
return 0;
}