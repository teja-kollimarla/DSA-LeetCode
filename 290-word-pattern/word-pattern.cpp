class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char> Map;
        vector<string> words;
        
        string temp = "";
        s += " ";
        for (int i = 0; i < s.length(); i++) {

            if (s[i] != ' ') {
                temp += s[i];
            } else {
                words.push_back(temp);
                temp = "";
            }
        }
        
        if (words.size() != pattern.length())
            return false;
        set<string> word_set(words.begin(),words.end());
        set<char> ch_set(pattern.begin(),pattern.end());
        if(word_set.size()!=ch_set.size()){
            return 0;
        }
        for (int i = 0; i < pattern.length(); i++) {
            if(!Map.contains(words[i])){
                Map.insert({words[i],pattern[i]});
            }
            else {
                if (Map.find(words[i])->second != pattern[i]){
                    return false;}
            }
        }
        for (string w : words) {
            cout << w << endl;
        }

        return 1;
    }
};