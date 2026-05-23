class Solution {
public:
    bool check(vector<int>& nums) {
        int dip = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (dip > 1) {
                return false;
            }
            if (nums[i] > nums[i + 1]) {
                dip++;
            }
        }
        if(nums[0]<nums.back()){
            dip++;
        }
        return dip<2;
    }
};