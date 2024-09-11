#include"SM.h"
// Function to add a student
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter Student ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter Student Name: ");
    scanf("%s", newStudent.name);
    printf("Enter Student Age: ");
    scanf("%d", &newStudent.age);
    printf("Enter Student Grade: ");
    scanf("%s", newStudent.grade);

    students[*count] = newStudent;
    (*count)++;

    printf("Student added successfully!\n");
}
