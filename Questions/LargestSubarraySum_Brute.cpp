#include<bits/stdc++.h>

using namespace std;

// O(N^2)
int largest2(int arr[],int n)
{
    //PrefixSumArrayCalculated
    int prefix [n] = {0},large = INT_MIN;
    prefix[0] = arr[0];
    for(int i = 1; i<n; i++)
        prefix[i] = arr[i] + prefix[i-1];
    //LargestSumSubarray
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
            int sum = 0;
            sum+= i>0 ? prefix[j] - prefix[i-1]:prefix[j];
            large = max(large,sum);
        }
    }

    return large;
}

// O(N^3)
int largest3(int arr[], int n)
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
    int arr[6] = {1,1,-6,3,1,-7},n=6;
    cout<<"\n\n"<<largest3(arr,n);
    cout<<"\n\n"<<largest2(arr,n);
    cout<<"\n\n"<<largest1(arr,n);
    return 0;
}