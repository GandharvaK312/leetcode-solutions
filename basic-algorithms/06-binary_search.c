#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Typical: %d\n", search(nums1, 6, 9)); // Expected: 4

    int nums2[] = {5};
    printf("Edge: %d\n", search(nums2, 1, -2)); // Expected: -1
    return 0;
}