class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size(), m = moveTime[0].size();
        vector<pair<int, int>> directions = {{0,1},{1,0},{0,-1},{-1,0}};
        
        // Min-heap: (time, x, y, moveCount)
        using State = tuple<int, int, int, int>;
        priority_queue<State, vector<State>, greater<State>> pq;
        pq.emplace(0, 0, 0, 0);  // Start at (0,0), time=0, 0 moves made

        // visited[x][y][parity] tracks minimum time to reach room (x,y) with move parity
        vector<vector<vector<int>>> visited(n, vector<vector<int>>(m, vector<int>(2, INT_MAX)));
        visited[0][0][0] = 0;  // Initial state

        while (!pq.empty()) {
            auto [time, x, y, moves] = pq.top();
            pq.pop();

            // Skip if we already found a better way to reach this state
            int parity = moves % 2;
            if (visited[x][y][parity] < time) continue;
            
            // If we reached the destination
            if (x == n - 1 && y == m - 1) return time;

            // Movement cost depends on current move count
            int moveCost = (parity == 0) ? 1 : 2;

            for (auto [dx, dy] : directions) {
                int nx = x + dx, ny = y + dy;
                if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                    // We can only start moving to the next room when we reach moveTime[nx][ny]
                    int startMoveTime = max(time, moveTime[nx][ny]);
                    
                    // Calculate arrival time at next room
                    int arriveTime = startMoveTime + moveCost;
                    
                    // Update if we found a better path
                    if (arriveTime < visited[nx][ny][(parity + 1) % 2]) {
                        visited[nx][ny][(parity + 1) % 2] = arriveTime;
                        pq.emplace(arriveTime, nx, ny, moves + 1);
                    }
                }
            }
        }

        return -1;  // Should not reach here with valid input
    }
};