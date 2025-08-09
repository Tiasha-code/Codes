#include <stdio.h>
#include <stdbool.h>

bool divideArray(int* nums, int numsSize) {
    int freq[501] = {0}; // Constraint assumption: 1 <= nums[i] <= 500

    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
    }

    for (int i = 0; i <= 500; i++) {
        if (freq[i] % 2 != 0) {
            return false; // Found a number with odd frequency
        }
    }
    return true; // All numbers occur even number of times
}

int main() {
    int nums[] = {3, 2, 3, 2, 2, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (divideArray(nums, size))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
