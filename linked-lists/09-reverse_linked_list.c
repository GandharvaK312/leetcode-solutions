#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

// --- PASTE THIS FUNCTION ONLY INTO LEETCODE ---
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* nextTemp = NULL;
    
    while (curr != NULL) {
        nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}
// ----------------------------------------------

// Helper function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print the list
void printList(struct ListNode* head) {
    printf("[");
    while (head != NULL) {
        printf("%d", head->val);
        if (head->next != NULL) printf(", ");
        head = head->next;
    }
    printf("]\n");
}

// Helper function to free the list
void freeList(struct ListNode* head) {
    struct ListNode* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    // Test Case 1: Typical list (1 -> 2 -> 3 -> 4 -> 5)
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);
    
    printf("Typical Original: ");
    printList(head1);
    struct ListNode* reversed1 = reverseList(head1);
    printf("Typical Reversed: ");
    printList(reversed1); // Expected: [5, 4, 3, 2, 1]
    freeList(reversed1);

    // Test Case 2: Edge case (Empty list)
    struct ListNode* head2 = NULL;
    printf("Edge Original: ");
    printList(head2);
    struct ListNode* reversed2 = reverseList(head2);
    printf("Edge Reversed: ");
    printList(reversed2); // Expected: []
    freeList(reversed2);

    return 0;
}