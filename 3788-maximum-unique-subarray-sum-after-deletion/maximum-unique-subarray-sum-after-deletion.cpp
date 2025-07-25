class Solution {
public:
    int maxSum(vector<int>& nums) {
        set s(nums.begin(),nums.end());
        auto max=*s.rbegin();
        auto c=0;
        for(auto i:s){
            if(max<0)
                return max;
            else{
                if(i>0){
                    c+=i;}}
        }
        return c;
    }
};