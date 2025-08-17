class Solution {
    public double new21Game(int n, int k, int maxPts) {
        // Edge cases
        if (k == 0 || n >= k + maxPts) return 1.0;

        double[] dp = new double[n + 1];
        dp[0] = 1.0;

        double windowSum = 1.0;  // sum of last maxPts dp values
        double result = 0.0;

        for (int i = 1; i <= n; i++) {
            dp[i] = windowSum / maxPts;

            if (i < k) {
                // Still can draw, so add to sliding window
                windowSum += dp[i];
            } else {
                // Game stops here
                result += dp[i];
            }

            // Maintain window size
            if (i - maxPts >= 0) {
                windowSum -= dp[i - maxPts];
            }
        }

        return result;
    }
}
