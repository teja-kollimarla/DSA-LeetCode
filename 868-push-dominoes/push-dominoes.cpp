class Solution {
public:
    string pushDominoes(string dominoes) {
       int n=dominoes.size();
        int i=0;
        string prev;
        while(prev!=dominoes){
            prev=dominoes;
            string next=dominoes;
            for(int i=0;i<n;i++){
                if (dominoes[i] == '.') {
                if (i > 0 && dominoes[i - 1] == 'R' && (i + 1 == n || dominoes[i + 1] != 'L')) {
                    next[i] = 'R';
                }
                if (i < n - 1 && dominoes[i + 1] == 'L' && (i == 0 || dominoes[i - 1] != 'R')) {
                    next[i] = 'L';
                }
            }
            }
            dominoes=next;
        }
        return dominoes;      
    }
};