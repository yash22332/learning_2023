#include <stdio.h>

#define SIZE 7

int main() {
    int arr[SIZE] = {10, 19, 15, 2, 25,18,11};
    int min = arr[0]; 
    int max = arr[0]; 
    int i;

    
    for (i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}