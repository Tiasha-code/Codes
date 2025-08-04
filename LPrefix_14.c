#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Use the first string as a reference
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                strs[0][i] = '\0'; // truncate first string
                return strs[0];
            }
        }
    }
    return strs[0];
}
int main() {
    char* strs[] = {"flower", "flow", "flight"};
    int size = sizeof(strs) / sizeof(strs[0]);
    
    char* prefix = longestCommonPrefix(strs, size);
    printf("Longest common prefix: %s\n", prefix); // Output: "fl"
    
    return 0;
}