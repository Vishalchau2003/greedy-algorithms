# 435. Non-overlapping Intervals

**Difficulty:** Medium

## Description

Given an array of intervals `intervals` where `intervals[i] = [starti, endi]`, return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

**Note:** Intervals that touch at a point (e.g., `[1, 2]` and `[2, 3]`) are considered **non-overlapping**.

---

## Examples

### Example 1:
Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Output: 1
Explanation: Remove [1,3] to make others non-overlapping.


### Example 2:
Input: intervals = [[1,2],[1,2],[1,2]]
Output: 2
Explanation: Remove two [1,2] intervals.


### Example 3:
Input: intervals = [[1,2],[2,3]]
Output: 0



---

## Constraints

- `1 <= intervals.length <= 10^5`
- `intervals[i].length == 2`
- `-5 * 10^4 <= starti < endi <= 5 * 10^4`
