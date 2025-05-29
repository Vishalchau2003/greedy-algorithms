#include <vector>
#include <algorithm>
using namespace std;

// Comparator function defined outside the class
bool cmp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];  // Sort by end time
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        // Sort intervals by end time
        sort(intervals.begin(), intervals.end(), cmp);

        int cnt = 0;
        int endpoint = intervals[0][1];

        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] < endpoint) {
                // Overlapping interval found
                cnt++;
            } else {
                // Update endpoint if no overlap
                endpoint = intervals[i][1];
            }
        }

        return cnt;
    }
};
