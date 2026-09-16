## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/
### Approach
I used a two-pointer approach where a `write_idx` keeps track of where the next non-zero element should go. As I iterated with `read_idx`, I swapped non-zero elements to the front.
### Complexity
- Time: $O(N)$
- Space: $O(1)$
### Notes
The requirement to do this in-place makes the two-pointer technique the most optimal solution.