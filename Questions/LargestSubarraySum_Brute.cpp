#include<bits/stdc++.h>

using namespace std;
int largest(int arr[], int n)
{
    int large = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
            int sum = 0;
            for(int k = i; k<=j; k++)
            {
                sum+=arr[k];
            }
        large=max(large,sum);
        }
    }
    return large;
}
int main()
{
    int arr[6] = {1,-1,6,3,1,-7},n=6;
    cout<<"\n\n"<<largest(arr,n);
    return 0;
}