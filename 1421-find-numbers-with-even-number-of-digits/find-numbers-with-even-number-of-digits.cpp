class Solution {
public:
    

    int findNumbers(vector<int>& nums) {
        int c=0;
        for(auto i :nums){
            if(to_string(i).length() % 2 ==0){
                c++;
            }
        }
        return c;
    }
};