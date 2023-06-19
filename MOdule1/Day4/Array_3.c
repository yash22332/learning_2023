#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE] = {2, 1, 7, 6, 4};
    int start = 0;
    int end = SIZE - 1; 

    
    while (start < end) {
        // Swapping elements 
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        
        start++;
        end--;
    }


    printf("Reversed array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}