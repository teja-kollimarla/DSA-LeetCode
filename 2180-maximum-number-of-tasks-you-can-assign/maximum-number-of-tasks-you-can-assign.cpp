#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to check if k tasks can be assigned
    bool canAssign(int k, vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        multiset<int> availableWorkers(workers.end() - k, workers.end());  // k strongest workers
        int usedPills = 0;

        for (int i = k - 1; i >= 0; --i) {
            int required = tasks[i];

            // Try to assign a worker without using a pill
            auto it = availableWorkers.lower_bound(required);
            if (it != availableWorkers.end()) {
                availableWorkers.erase(it);
            } else {
                // Try to use a pill
                if (usedPills == pills) return false;

                // Find worker who can do task[i] with a pill
                it = availableWorkers.lower_bound(required - strength);
                if (it == availableWorkers.end()) return false;

                availableWorkers.erase(it);
                usedPills++;
            }
        }
        return true;
    }

    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        sort(tasks.begin(), tasks.end());
        sort(workers.begin(), workers.end());

        int low = 0, high = min((int)tasks.size(), (int)workers.size()), ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (canAssign(mid, tasks, workers, pills, strength)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
