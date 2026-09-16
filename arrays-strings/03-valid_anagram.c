#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int counts[26] = {0};
    int i = 0;
    while (s[i] != '\0' && t[i] != '\0') {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
        i++;
    }
    if (s[i] != '\0' || t[i] != '\0') return false;
    for (i = 0; i < 26; i++) {
        if (counts[i] != 0) return false;
    }
    return true;
}

int main() {
    printf("Typical: %d\n", isAnagram("anagram", "nagaram")); // Expected: 1 (True)
    printf("Edge: %d\n", isAnagram("a", "b"));                // Expected: 0 (False)
    return 0;
}