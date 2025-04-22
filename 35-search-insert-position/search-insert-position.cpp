class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j;
        if(nums[0]>=target){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i+1]>=target){
                j= i;
                break;
            }

        }
        return j+1;
    }
};