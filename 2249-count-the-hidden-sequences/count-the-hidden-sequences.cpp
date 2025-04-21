class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long n = differences.size();
        long long c=0;
        vector<long long> sum(n+1,0);
        for(int i=0;i<n;i++){
            sum[i+1]=sum[i]+differences[i];
        }
        long long min=*min_element(sum.begin(),sum.end());
        long long max=*max_element(sum.begin(),sum.end());
        long long minE=lower-min;
        long long maxE=upper-max;
        if(minE<=maxE){
            return maxE-minE+1;
        }
        return 0;
    }
};