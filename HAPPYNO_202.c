#include <stdio.h>
#include <stdbool.h>

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n, fast = n;

    // Floyd's cycle detection: fast moves 2 steps, slow moves 1
    do {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (isHappy(n))
        printf("%d is a Happy Number.\n", n);
    else
        printf("%d is NOT a Happy Number.\n", n);

    return 0;
}
