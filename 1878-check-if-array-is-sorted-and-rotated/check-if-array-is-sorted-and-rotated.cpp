class Solution {
public:
    bool check(vector<int>& nums) {
        int dip=0;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                dip++;
            }
        }
        if(dip==1 && nums[0]>=nums.back()){
            return true;
        }
        else{ 
            if(dip>1){
            return false;
        }
        if(dip ==0 && nums[0]<=nums.back() )
            return true;
        
        }
        return false;
    }
};