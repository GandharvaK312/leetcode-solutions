## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/
### Approach
I initialized two pointers to represent the search boundaries. In a loop, I checked the middle element, narrowing the search space in half each time depending on whether the target was larger or smaller.
### Complexity
- Time: $O(\log N)$
- Space: $O(1)$
### Notes
Calculating `mid` as `left + (right - left) // 2` is generally safer in languages like C++ to prevent integer overflow.