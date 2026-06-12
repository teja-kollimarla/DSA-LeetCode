class Solution {
public:
    bool isvalid(string s ,string t){
        unordered_map<char,char> match;
        if(s.length()!=t.length()){
            return 0;
        }
        set<char> ss(s.begin(),s.end());
        set<char> ts(t.begin(),t.end());
        if(ss.size()!=ts.size()){
            return 0;
        }
        for(int i=0;i<s.size();i++){
            if(!match.contains(s[i])){
                match.insert({s[i],t[i]});
            }
            else{
                if(match.find(s[i])->second != t[i]){
                    return 0;
                }
            }
        }
        return 1;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            if(isvalid(pattern,words[i])){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};