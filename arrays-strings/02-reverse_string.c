#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char s1[] = "hello";
    reverseString(s1, 5);
    printf("Typical: %s\n", s1); // Expected: olleh

    char s2[] = "a";
    reverseString(s2, 1);
    printf("Edge: %s\n", s2); // Expected: a
    return 0;
}