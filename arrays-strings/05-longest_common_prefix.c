#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}

int main() {
    char str1[] = "flower", str2[] = "flow", str3[] = "flight";
    char* arr1[] = {str1, str2, str3};
    printf("Typical: %s\n", longestCommonPrefix(arr1, 3)); // Expected: fl

    char str4[] = "dog", str5[] = "racecar", str6[] = "car";
    char* arr2[] = {str4, str5, str6};
    printf("Edge: %s\n", longestCommonPrefix(arr2, 3)); // Expected: (empty)
    return 0;
}