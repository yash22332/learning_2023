#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float phyMarks, mathMarks, chemMarks;
    float totalMarks, percentage;

    
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    // Read name
    printf("Enter Name: ");
    scanf("%s", name);

    
    printf("Enter Marks in Physics: ");
    scanf("%f", &phyMarks);

    printf("Enter Marks in Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemMarks);

    
    totalMarks = phyMarks + mathMarks + chemMarks;
    percentage = (totalMarks / 300) * 100;

    
    printf("\n Student Summary \n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", phyMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
