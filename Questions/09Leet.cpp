class Solution {
public:
    vector<int> buildArray(vector<int>& nums)
    {
        vector <int> vec;
        int daxoron;
        for(int i = 0; i<nums.size(); i++)
        {
            daxoron = nums[i];
            vec.push_back(nums[daxoron]);
        }
        return vec;
    }
};