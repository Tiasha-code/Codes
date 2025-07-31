#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    int result=0,result1=0;
    for(int i=0;i<numsSize;i++)
    {
        int count=0;
        for (int j = 0; j < numsSize; j++)
         {
        if(nums[i]==nums[j])
        {
            count++;
        }
        }
        if (count == 1) {
            return nums[i]; 
        }
    }
    return -1;  
}

int main() {
    int nums[] = {2,2,3,2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int single = singleNumber(nums, size);
    printf("Single number is: %d\n", single);

    return 0;
}