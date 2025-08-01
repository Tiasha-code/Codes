#include <stdio.h>

int mySqrt(int x) {
    if (x < 2) return x;

    int left = 1, right = x / 2, ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        long long square = (long long)mid * mid;

        if (square == x) {
            return mid;
        } else if (square < x) {
            ans = mid;         
            left = mid + 1;   
        } else {__INT_LEAST16_MAX__
            right = mid - 1;   
        }
    }

    return ans;
}

int main() {
    int x = 8;
    printf("sqrt(%d) = %d\n", x, mySqrt(x));  // Output: 2
    return 0;
}
