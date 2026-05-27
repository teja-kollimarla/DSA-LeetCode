class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> ans(26, 0);
        vector<bool> vis(123, 0);
        for(char ch : word)
        {
            if(ch <= 90) // capital letter
            {
                if(!vis[ch] && vis[ch + 32])
                    ans[ch - 65] = true;
            }
            else // small letter
            {
                if(vis[ch - 32])
                    ans[ch - 32 - 65] = false;
            }
            vis[ch] = true;
        }
        return accumulate(ans.begin(), ans.end(), 0);
    }
};