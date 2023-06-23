#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};


void parseString(const char* input, struct Student* students, int numStudents) {
    char* token;
    char* rest = strdup(input);
    int i = 0;

    while ((token = strtok_r(rest, " ", &rest))) {
        if (i % 3 == 0)
            students[i / 3].rollno = atoi(token);
        else if (i % 3 == 1)
            strcpy(students[i / 3].name, token);
        else if (i % 3 == 2)
            students[i / 3].marks = atof(token);
        i++;
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    char input[100];
    printf("Enter the input string: ");
    scanf("\n", input);

    parseString(input, students, numStudents);

    
    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}
