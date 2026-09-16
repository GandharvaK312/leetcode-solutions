## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
### Approach
I iterated through the prices while keeping track of the minimum price seen so far. I continuously calculated the potential profit for the current day and updated the maximum profit if it was higher.
### Complexity
- Time: $O(N)$
- Space: $O(1)$
### Notes
This is a classic dynamic programming concept disguised as a greedy problem. Tracking the lowest past state is key.