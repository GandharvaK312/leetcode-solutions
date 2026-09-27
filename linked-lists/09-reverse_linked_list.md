## Problem: Reverse Linked List (Easy)
**Link:** https://leetcode.com/problems/reverse-linked-list/
### Approach
I used an iterative approach with three pointers: `prev`, `curr`, and `nextTemp`. As I traversed the list, I temporarily stored the next node, pointed the current node's `next` reference backwards to `prev`, and then shifted both `prev` and `curr` one step forward.
### Complexity
- Time: $O(N)$
- Space: $O(1)$
### Notes
This is a core pointer manipulation technique. Choosing an iterative approach over recursion keeps the space complexity at $O(1)$ by avoiding the function call stack.