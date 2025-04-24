class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> n(nums.begin(),nums.end());
        int c=0;
        set<int> sa;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                sa.insert(nums[j]);
                if(sa.size()==n.size()){
                    c++;
                }
            }
            sa.clear();
        }
        
        return c;
    }
};