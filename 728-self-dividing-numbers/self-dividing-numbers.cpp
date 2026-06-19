class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            bool b=true;
            int num=i;
            while(num){
                if(num%10==0 || i%(num%10)!=0){
                    b=false;  
                    break;
                }
                num/=10;

            }
            if(b){
                ans.push_back(i);
            }

        }
        return ans;
    }
};