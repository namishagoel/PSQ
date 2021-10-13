#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    //K Rotation Of Array
    vector<int> vec;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int temp = i+1;
        vec.push_back(temp);
    }

    //Enter Number of Rotations
    int k;
    cin>>k;

    //Actual Rotation Process
    k = n%k;
    
    return 0;
}