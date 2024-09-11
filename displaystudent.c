#include "SM.h"
// Function to display all students
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d, Grade: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].grade);
    }
}

