## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/
### Approach
I used a hash map to count the frequencies of each character in the first string. Then, I iterated through the second string, decrementing the counts to verify both strings have identical character frequencies.
### Complexity
- Time: $O(N)$
- Space: $O(1)$
### Notes
The space complexity is $O(1)$ because the hash map will hold at most 26 key-value pairs (for lowercase English letters).