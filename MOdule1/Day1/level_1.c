#include <stdio.h>

int find_biggest(int a, int b) {
    int biggest;
    
    if (a > b) {
        biggest = a;
    } else {
        biggest = b;
    }
    
    return biggest;
}

int find_biggest_ternary(int a, int b) {
    int biggest = (a > b) ? a : b;
    return biggest;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    int result = find_biggest(num1, num2);
    printf("Using if-else: The biggest number is: %d\n", result);
    
    result = find_biggest_ternary(num1, num2);
    printf("Using ternary operator: The biggest number is: %d\n", result);
    
    return 0;
}
