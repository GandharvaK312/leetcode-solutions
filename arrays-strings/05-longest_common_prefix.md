## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/
### Approach
I found the shortest string in the array since the prefix cannot be longer than it. I then iterated through its characters, checking if every other string in the array had the same character at that index.
### Complexity
- Time: $O(N \cdot M)$
- Space: $O(1)$
### Notes
$N$ is the number of strings and $M$ is the length of the shortest string. Early exit is important when a mismatch is found.