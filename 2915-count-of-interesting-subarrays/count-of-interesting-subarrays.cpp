class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
      unordered_map<int,long long> pc;
      pc[0]=1;
      int p=0;
      long long r=0;
      for(auto i :nums){
        if(i%modulo==k){
          p++;}
        int target=(p-k+modulo)%modulo;
        r+=pc[target];
        pc[p%modulo]++;
      }
        return r;


    }
};