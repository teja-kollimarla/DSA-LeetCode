class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> up;
        for(char c:text){
            up[c]++;
        }
        return min({up['b'],up['a'],up['l']/2,up['o']/2,up['n']});
    }
};