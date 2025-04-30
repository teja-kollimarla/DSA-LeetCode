class Solution {
public:
    

    int findNumbers(vector<int>& nums) {
        int c=0;
        for(auto i :nums){
            int digits = (int)log10(i) + 1;

            if(digits % 2 ==0){
                c++;
            }
        }
        return c;
    }
};