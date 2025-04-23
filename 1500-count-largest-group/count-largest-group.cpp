class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> dsum;

        for(int i=1;i<=n;i++){
            int s=0;
            int num=i;
            while(num>0){
                s+=num%10;
                num/=10;
            }
            dsum[s]++;
        }
        int maxlen=0;
        for(auto pair:dsum){
            maxlen=max(maxlen,pair.second);
        }

        int c=0;
        for(auto pair:dsum){
            if(pair.second==maxlen){
                c++;
            }
        }
        
        return c;
    }
};