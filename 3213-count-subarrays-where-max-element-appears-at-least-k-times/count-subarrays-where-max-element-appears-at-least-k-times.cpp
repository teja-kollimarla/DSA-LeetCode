class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l=0;long long c=0;
        int maxNum=*max_element(nums.begin(),nums.end());
        long long ans = 0;
        for(int r=0;r<nums.size();r++){
            if (nums[r] == maxNum) c++;
           while (c >= k) {
                if (nums[l] == maxNum) c--;
                l++;
            }
            
            ans += l;
        }
        return ans;
    }
};