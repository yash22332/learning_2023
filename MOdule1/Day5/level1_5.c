#include <stdio.h>


struct Person {
    char name[50];
    int age;
};


void swapPersons(struct Person* per1, struct Person* per2) {
    
    char tempName[50];
    strcpy(tempName, per1->name);
    strcpy(per1->name, per2->name);
    strcpy(per2->name, tempName);

    
    int tempAge = per1->age;
    per1->age = per2->age;
    per2->age = tempAge;
}

int main() {
    
    struct Person per1 = { "John", 25 };
    struct Person per2 = { "Smith", 30 };

    printf("Before swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", per1.name, per1.age);
    printf("Person 2: Name = %s, Age = %d\n", per2.name, per2.age);

    
    swapPersons(&per1, &per2);

    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", per1.name, per1.age);
    printf("Person 2: Name = %s, Age = %d\n", per2.name, per2.age);

    return 0;
}
