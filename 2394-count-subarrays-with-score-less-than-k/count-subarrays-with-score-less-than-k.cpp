class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long left=0,sum=0,c=0;
        for(long long right=0;right<nums.size();right++){
            sum+=nums[right];
            while(left<=right && sum*(right-left+1)>=k){
                sum-=nums[left++];
            }
            c+=(right-left+1);
        }
     return c;   
    }
};