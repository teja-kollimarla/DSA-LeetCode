class Solution {
public:
    string binary(int n){
        string res="";
        while(n>0){
           res += (char)('0' + n % 2);
            n/=2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    int hammingWeight(int n) {
        string res=binary(n);
        cout<<res;
        return count(res.begin(),res.end(),'1');
    }
};