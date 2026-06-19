class Solution {
public:
    bool digitCount(string num) {
        

        for(int i=0;i<num.size();i++){
            int s=count(num.begin(),num.end(),i+'0');
            if(num[i]-'0'!=s){
                return false;
            }

            
        }
        return true;

    }
};