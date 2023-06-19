
#include <stdio.h>

void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[] = "Hello World";
    printf("Input String: %s\n", str);

    toggleCase(str);

    printf("Output String: %s\n", str);

    return 0;
}