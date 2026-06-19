class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxSum;
        int temp=0;
        for(int i:gain){
            temp+=i;
            maxSum=max(maxSum,temp);
            
        }
        return maxSum;
    }
};