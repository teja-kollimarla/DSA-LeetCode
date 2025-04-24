class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> n(nums.begin(),nums.end());
        int c=0,l=0;
        unordered_map<int,int> sa;
        for(int i=0;i<nums.size();i++){
           sa[nums[i]]++;
           while(sa.size()==n.size()){
                c+=(nums.size()-i);
                sa[nums[l]]--;
                if(sa[nums[l]]==0){
                    sa.erase(nums[l]);
                }
                l++;
           }
        }
        return c;
        
        return c;
    }
};