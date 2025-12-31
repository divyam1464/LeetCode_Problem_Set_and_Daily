# 2527. Find Xor-Beauty of Array

Easy

---

You are given a **0-indexed** integer array `nums`.

The **xor-beauty** of the array is defined as the bitwise **XOR** of all possible values of  
`nums[i] | nums[j] & nums[k]` for all `0 <= i, j, k < n`.

Return the **xor-beauty** of the array.

---

### Example 1:
Input: nums = [1,4]
Output: 5
Explanation:
The xor-beauty is:
(1 | 1) & 1 ⊕ (1 | 1) & 4 ⊕ (1 | 4) & 1 ⊕ (1 | 4) & 4
⊕ (4 | 1) & 1 ⊕ (4 | 1) & 4 ⊕ (4 | 4) & 1 ⊕ (4 | 4) & 4 = 5


### Example 2:
Input: nums = [15,45,20,2,34,35,5,44,32,30]
Output: 34


---

### Constraints:
- `1 <= nums.length <= 10^5`
- `0 <= nums[i] <= 10^9`
