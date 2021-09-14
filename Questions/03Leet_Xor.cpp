class Solution {
public:
    int xorOperation(int n, int start)
    {
        int arr[n],xr=start;
        arr[0]=start;
        for(int i=1; i<n; i++)
        {
            arr[i]=start+2*i;
            xr=xr^arr[i];
        }
        return xr;
    }
};