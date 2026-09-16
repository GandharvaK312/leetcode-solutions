## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/
### Approach
I used a hash map to store the elements and their indices as I iterate through the array. For each element, I check if the complement (target - current element) already exists in the map.
### Complexity
- Time: $O(N)$
- Space: $O(N)$
### Notes
Using a hash map allows for a single pass through the array, making it much more efficient than the brute-force nested loop approach.