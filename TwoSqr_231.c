#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPowerOfTwo(n))

        printf("true\n");
    else
        printf("false\n");

    return 0;
}
