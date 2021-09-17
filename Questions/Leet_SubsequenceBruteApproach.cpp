class Solution {
public:
    int findLHS(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        
        set<long long int> s;
        
        for(long long int i=0; i<nums.size(); i++)
            s.insert(nums[i]);
        
        long long int ii=0;
        
        long long int count1=0,count2=0,count0=0;
        
        set<long long int>::iterator itr;
        
        for(itr=s.begin(); itr != s.end(); itr++)
        {
            count1=0;count0=0;
            for(long long int j=0; j<nums.size(); j++)
            {
                if(nums[j]-*itr==1 || nums[j] - *itr==0)
                    count1++;
                if(nums[j]-*itr==0)
                    count0++;
            }
            if(count0==count1)
                count1=0;
            if(count1>count2&&count1>0)
                count2=count1;
            ii++;
        }
        if(s.size()==1)
           return 0;
        return (count2);
    }
};