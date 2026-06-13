class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int> alpha;
        for(int i=97;i<123;i++){
            alpha.insert({(char)i,weights[i-97]});
        }
        string str="";
        for(int i=0;i<words.size();i++){
            int sum=0;
            for(int j=0;j<words[i].size();j++){
                char ch=words[i][j];
                sum+=alpha[ch];
            }
            sum=sum%26;
            str+=(char)('z'-sum);
        }
        return str;
    }
};