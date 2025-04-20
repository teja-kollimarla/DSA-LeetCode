class Solution {
public:
    int numRabbits(vector<int>& answers) {
      unordered_map<int, int> count;
        int result = 0;

        for (int a : answers) {
            if (a == 0) {
                result += 1;
            } else {
                if (count[a] == 0) {
                    result += a + 1;  
                    count[a] = a;
                } else {
                    count[a]--; 
                }
            }
        }

        return result; 
    }
};