class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        //To Prevent Buffer Overflow
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        //Sum Triplets
        int triplets=0,daxoron=0;
        for(int i = 1; i < flowerbed.size()-1; ++i)
        {
            triplets=flowerbed[i-1] + flowerbed[i] + flowerbed[i+1];
            if(triplets == 0)
            {
                daxoron++;
                ++i;
            }
                
        }
        if(daxoron>=n)
            return true;
        return false;
    }
};