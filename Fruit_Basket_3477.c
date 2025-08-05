#include <stdio.h>
#include <stdbool.h>

// Function to count unplaced fruit types
int numOfUnplacedFruits(int* fruits, int n, int* baskets, int m) {
    bool used[m];
    for (int i = 0; i < m; ++i)
        used[i] = false;

    int unplacedCount = 0;

    for (int i = 0; i < n; ++i) {
        bool placed = false;
        for (int j = 0; j < m; ++j) {
            if (!used[j] && baskets[j] >= fruits[i]) {
                used[j] = true;
                placed = true;
                break;
            }
        }
        if (!placed)
            unplacedCount++;  // this fruit type couldn't be placed
    }

    return unplacedCount;
}

// Main function to test the above
int main() {
    int fruits[] = {4, 2, 5};
    int baskets[] = {3, 5, 2};
    int n = sizeof(fruits) / sizeof(fruits[0]);
    int m = sizeof(baskets) / sizeof(baskets[0]);

    int result = numOfUnplacedFruits(fruits, n, baskets, m);
    printf("Unplaced fruit types: %d\n", result);  // Expected output: 1

    return 0;
}
