## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/
### Approach
I used a two-pointer approach, placing one pointer at the start and one at the end of the array. I swapped the characters at these pointers and moved them toward the center until they met.
### Complexity
- Time: $O(N)$
- Space: $O(1)$
### Notes
Modifying the array in-place is a great way to save memory and practice pointer manipulation.