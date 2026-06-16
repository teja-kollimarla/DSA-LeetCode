class Solution {
public:
    string processStr(string s) {
        string res = "";
        for (int i : s) {
            if ((i >= 'a' && i <= 'z')) {
                res += i;
            } 
            else if (i == '#') {
                res += res;
            } else if (i == '*') {
                if (!res.empty()) {
                    res.pop_back();
                }
            } else if (i == '%') {
                reverse(res.begin(), res.end());
            }

            cout << res << endl;
        }
        cout << res << endl;
        return res;
    }
};