
#include <stdio.h>

#define SIZE 8

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6,7,8};
    int evenSum = 0; 
    int oddSum = 0;  

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    int diff = evenSum - oddSum;
    printf("Difference between even and odd elements: %d\n", diff);

    return 0;
}