class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int dip = nums.back() > nums[0] ;
        for(int i=1; i<nums.size(); i++)
            if(nums[i-1] > nums[i] && ++ dip > 1)
                return false;
        return true;
    }
};