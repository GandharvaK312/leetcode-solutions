#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// --- PASTE THIS FUNCTION ONLY INTO LEETCODE ---
bool isValid(char* s) {
    int n = strlen(s);
    char* stack = (char*)malloc(n);
    int top = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else {
            if (top == -1) { free(stack); return false; }
            char c = stack[top--];
            if ((s[i] == ')' && c != '(') ||
                (s[i] == '}' && c != '{') ||
                (s[i] == ']' && c != '[')) {
                free(stack); return false;
            }
        }
    }
    bool result = (top == -1);
    free(stack);
    return result;
}
// ----------------------------------------------

int main() {
    // Test Case 1: Typical
    printf("Test 1: %d\n", isValid("()[]{}")); 
    
    // Test Case 2: Edge (Starts with closing bracket)
    printf("Test 2: %d\n", isValid("]"));      
    
    return 0;
}