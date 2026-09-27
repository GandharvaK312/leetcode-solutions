## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/
### Approach
I used a stack to keep track of opening brackets. When encountering a closing bracket, I popped the top of the stack and checked if it matched the corresponding opening bracket using a hash map.
### Complexity
- Time: $O(N)$
- Space: $O(N)$
### Notes
The stack must be entirely empty at the end to return True, which handles cases where there are leftover opening brackets.