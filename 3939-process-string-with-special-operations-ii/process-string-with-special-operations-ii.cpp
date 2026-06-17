class Solution {
public:
    char processStr(string s, long long k) {
        vector<long long> lenAfter(s.size() + 1, 0);

        // Compute lengths only
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if ('a' <= ch && ch <= 'z') {
                lenAfter[i + 1] = lenAfter[i] + 1;
            }
            else if (ch == '#') {
                lenAfter[i + 1] = min((long long)4e18, lenAfter[i] * 2);
            }
            else if (ch == '%') {
                lenAfter[i + 1] = lenAfter[i];
            }
            else { // delete last
                lenAfter[i + 1] =
                    (lenAfter[i] > 0 ? lenAfter[i] - 1 : 0);
            }
        }

        long long len = lenAfter[s.size()];

        if (k >= len) return '.';

        // Work backwards
        for (int i = (int)s.size() - 1; i >= 0; i--) {
            char ch = s[i];

            if ('a' <= ch && ch <= 'z') {
                if (k == len - 1) return ch;
                len--;
            }
            else if (ch == '#') {
                long long half = len / 2;
                if (k >= half) k -= half;
                len = half;
            }
            else if (ch == '%') {
                k = len - 1 - k;
            }
            else { // delete last
                long long prevLen = lenAfter[i];
                if (prevLen > 0) {
                    len = prevLen;
                }
            }
        }

        return '.';
    }
};