class Solution {
    public int numberOfBeams(String[] bank) {
        int t = 0;
        int a = 0;
        int c;
        for (int i = 0; i < bank.length; i++) {
            c = 0;
            for (int j = 0; j < bank[i].length(); j++) {
                if (bank[i].charAt(j) == '1') {
                    c++;
                }
            }
            if (c == 0) {
                continue;
            }
            a += t * c;
            t = c;
        }
        return a;
    }
}