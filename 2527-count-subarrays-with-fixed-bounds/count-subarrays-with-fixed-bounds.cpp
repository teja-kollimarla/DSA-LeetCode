class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long c=0;
        int minpos=-1,maxpos=-1,leftbound=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK|| nums[i]>maxK)
            {
                leftbound=i;
                minpos=-1;
                maxpos=-1;
            }
            if(nums[i] == maxK) maxpos=i;
            if(nums[i]== minK) minpos=i;
            if(minpos!=-1 && maxpos!=-1) c+=max(0,min(minpos,maxpos)-leftbound);

        }
        return c;

    }
};  