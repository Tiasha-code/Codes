#include <stdio.h>
#include <string.h>

int romanToInt(char* s) {
    int total = 0;
    int prev = 0;
    int curr = 0;

    for (int i = strlen(s) - 1; i >= 0; i--) {
        switch (s[i]) {
            case 'I': curr = 1; break;
            case 'V': curr = 5; break;
            case 'X': curr = 10; break;
            case 'L': curr = 50; break;
            case 'C': curr = 100; break;
            case 'D': curr = 500; break;
            case 'M': curr = 1000; break;
            default: curr = 0; // Invalid input
        }

        if (curr < prev)
            total -= curr;
        else
            total += curr;

        prev = curr;
    }

    return total;
}
int main() {
    char roman[20];
    printf("Enter Roman numeral: ");
    scanf("%s", roman);

    int number = romanToInt(roman);
    printf("Integer value: %d\n", number);

    return 0;
}
