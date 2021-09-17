class Solution {
public:
        int findLHS(vector<int>& nums) {
        unordered_map<int, int> count;
        for (long long int n : nums)
            count[n]++;   
        int ans = 0;
        for (auto [num, f] : count) {
            if (count.find(num+1) != count.end())
                ans = max(ans, f + count[num+1]);
        }
        return ans;
    }
};