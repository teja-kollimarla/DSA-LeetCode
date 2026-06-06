class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int l=0;
        int r=accumulate(nums.begin(), nums.end(), 0);
        for(int i=0;i<nums.size();i++){
           r-=nums[i];
           ans[i]=abs(r-l);
           l+=nums[i];
        }
        return ans;
    }
};