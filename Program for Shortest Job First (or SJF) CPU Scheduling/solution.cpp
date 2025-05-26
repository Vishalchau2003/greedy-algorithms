#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // Step 1: Sort the burst times in ascending order for SJF scheduling
        sort(bt.begin(), bt.end());

        int n = bt.size(); // Number of processes
        long long waitingTime = 0; // Total waiting time
        long long currentTime = 0; // Keeps track of cumulative time elapsed

        // Step 2: For each process (after the first), add the current time to total waiting time
        for (int i = 0; i < n; i++) {
            waitingTime += currentTime; // Add waiting time for current process
            currentTime += bt[i];       // Update current time to include burst time of current process
        }

        // Step 3: Return the floor of average waiting time
        return waitingTime / n; // Integer division automatically floors the result
    }
};

// Example driver code (for testing only)
int main() {
    Solution sol;
    vector<int> bt1 = {4, 3, 7, 1, 2};
    cout << "Average Waiting Time (Example 1): " << sol.solve(bt1) << endl;

    vector<int> bt2 = {1, 2, 3, 4};
    cout << "Average Waiting Time (Example 2): " << sol.solve(bt2) << endl;

    return 0;
}
