class Solution {
public:
    bool self ( int num )
    {
        int temp = num;
        while(temp)
        {
            int rem = temp%10;
            if(rem == 0 || num%rem != 0)
                return false;
            temp = temp/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> vec;
        bool check;
        for(int i = left; i<=right; i++)
            if(self(i))
                vec.push_back(i);
        
    return vec;
    }
};