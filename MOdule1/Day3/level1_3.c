#include <stdio.h>

void findSmallestLargestDigits(int n) {
    int num, smallestDigit, largestDigit;

    printf("Enter n numbers:\n");

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        int digit;
        int firstDigit = num % 10;

        smallestDigit = largestDigit = firstDigit;

        while (num > 0) {
            digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    printf("Smallest digit: %d\n", smallestDigit);
    printf("Largest digit: %d\n", largestDigit);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
    } else {
        findSmallestLargestDigits(n);
    }

    return 0;
}
