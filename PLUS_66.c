#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }

    int* result = (int*)malloc(sizeof(int) * (digitsSize + 1));
    result[0] = 1;
    for (int i = 1; i <= digitsSize; i++)
        result[i] = 0;
    *returnSize = digitsSize + 1;
    return result;
}

int main() {
    int digits[] = {9, 9, 9};
    int digitsSize = sizeof(digits) / sizeof(digits[0]);
    int returnSize;

    int* result = plusOne(digits, digitsSize, &returnSize);
    printArray(result, returnSize);

    if (result != digits) free(result);  // Avoid freeing stack memory
    return 0;
}
