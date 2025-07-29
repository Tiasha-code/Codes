#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i]; 
    }
    return result;
}

int main() {
    int nums[] = {2, 2, 1};  
    int size = sizeof(nums) / sizeof(nums[0]);

    int single = singleNumber(nums, size);
    printf("Single number is: %d\n", single);

    return 0;
}