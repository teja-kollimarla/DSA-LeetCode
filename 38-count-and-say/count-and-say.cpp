class Solution {
public:
    string countAndSay(int n) {
       
        string prev="1",result="";
        if(n==1){
            return "1";
        }
        while(n>1){
        result = "";
            int count = 1;
            for (int i = 1; i < prev.size(); i++) {
                if (prev[i] == prev[i - 1]) {
                    count++;
                } else {
                    result += to_string(count) + prev[i - 1];
                    count = 1;
                }
            }
            result += to_string(count) + prev.back(); 

          

            prev = result;
            n--;
        }

        return result;
  
        }
       
    
};