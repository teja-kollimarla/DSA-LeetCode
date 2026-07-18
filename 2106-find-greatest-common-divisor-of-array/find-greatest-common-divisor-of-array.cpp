class Solution {
public:
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
            int min=INT_MAX;
            int max=INT_MIN;
            for(int i=0;i<nums.size();i++){
                if(max<nums[i]){
                    max=nums[i];
                }
                if(min>nums[i]){
                    min=nums[i];
                }
            }
            return gcd(max,min);
    }
};