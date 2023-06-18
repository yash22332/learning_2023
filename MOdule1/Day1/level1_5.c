#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result;

    switch (oper_type) {
        case 1:  
            result = num | (1 << 0);
            break;
        case 2:  
            result = num & ~(1 << 31);
            break;
        case 3: 
            result = num ^ (1 << 15);
            break;
        default:
            printf("Error: Invalid operation type\n");
            return 0;  
    }

    return result;
}

int main() 
{
    int num, oper_type;
    int result;

    
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    printf("Enter operation type : ");
    scanf("%d", &oper_type);

    
    result = bit_operations(num, oper_type);

    
    printf("Result: %d\n", result);

    return 0;
}
