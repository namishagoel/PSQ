class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int prod=1,sum=0;
        while(n!=0)
        {
            int temp;
            temp=n%10;
            n=n/10;
            prod*=temp;
            sum+=temp;
        }
        return prod-sum;
    }
};