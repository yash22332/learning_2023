#include <stdio.h>

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= (2 * (n - 2)); i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces(i);
        if (i > 1) {
            printNumbers(i);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
