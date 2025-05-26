# Shortest Job First

**Difficulty**: Medium  
**Accuracy**: 68.79%  
**Submissions**: 30K+  
**Points**: 4  
**Average Time**: 30 minutes

---

### Problem Statement:

Geek is a software engineer. He is assigned with the task of calculating the **average waiting time** of all the processes by following the **Shortest Job First (SJF)** policy.

**Shortest Job First (SJF)** or **Shortest Job Next** is a scheduling policy that selects the waiting process with the smallest execution time to execute next.

Given an array of integers `bt` of size `n`, where each element denotes the **burst time** of a process, calculate the **average waiting time** of all the processes and return the nearest integer **less than or equal** to the output (i.e., use `floor` behavior).

---

### Note:
- Consider all processes are available at **time 0**.

---

### Input:

- `n` → Number of processes (1 ≤ n ≤ 10⁵)
- `bt[]` → Array of burst times, where `1 ≤ bt[i] ≤ 10⁵`

---

### Output:

- Return the floor of the average waiting time of all processes.

---

### Example 1:

**Input**:
n = 5
bt = [4, 3, 7, 1, 2]

**Output**:
4

**Explanation**:
Sorted burst times: [1, 2, 3, 4, 7]  
Waiting times: [0, 1, 3, 6, 10]  
Average waiting time = (0 + 1 + 3 + 6 + 10) / 5 = 4

---

### Example 2:

**Input**:
n = 4
bt = [1, 2, 3, 4]


**Output**:
2


---

### Expected Time Complexity: O(n log n)  
### Expected Auxiliary Space: O(1)
