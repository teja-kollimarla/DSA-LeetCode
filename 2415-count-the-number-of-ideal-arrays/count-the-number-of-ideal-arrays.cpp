class Solution {
public:
    int idealArrays(int n, int maxValue) {
        const int MOD = 1e9 + 7;
        // Initialize binomial coefficient array C[i][j] = C(i,j)
        vector<vector<int>> C(n, vector<int>(16, 0));
        // Initialize memoization table for dfs
        vector<vector<int>> memo(maxValue + 1, vector<int>(16, -1));

        // Compute binomial coefficients using Pascal's triangle
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i && j < 16; ++j) {
                if (j == 0) {
                    C[i][j] = 1; // C(i,0) = 1
                } else {
                    C[i][j] = (C[i-1][j] + C[i-1][j-1]) % MOD; // C(i,j) = C(i-1,j) + C(i-1,j-1)
                }
            }
        }

        // DFS function to count sequences starting with value 'val' and 'cnt' distinct values
        auto dfs = [&](auto&& self, int val, int cnt) -> int {
            // Check memoized result
            if (memo[val][cnt] != -1) {
                return memo[val][cnt];
            }
            // Base case: number of ways to place 'cnt' distinct values in 'n' positions
            long long res = C[n-1][cnt-1];
            // If we can add more distinct values
            if (cnt < n) {
                // Try next value as k*val (k >= 2)
                for (int k = 2; k * val <= maxValue; ++k) {
                    res = (res + self(self, k * val, cnt + 1)) % MOD;
                }
            }
            return memo[val][cnt] = res;
        };

        // Sum over all possible starting values
        long long ans = 0;
        for (int i = 1; i <= maxValue; ++i) {
            ans = (ans + dfs(dfs, i, 1)) % MOD;
        }

        return ans;
        
    }
};