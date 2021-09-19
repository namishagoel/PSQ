class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int largest=INT_MIN,sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i; j<nums.size(); j++)
            {
                sum=0;
                for(int k=i; k<=j; k++)
                {
                    sum+=nums[k];
                }
                if(sum>largest)
                    largest=sum;
            }
        }
    return largest;
    }
};