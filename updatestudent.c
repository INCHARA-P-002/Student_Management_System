#include "SM.h"
// Function to update student information
void updateStudent(struct Student students[], int count) {
    int id;
    printf("Enter Student ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Updating details for Student ID: %d\n", id);
            printf("Enter new name (current: %s): ", students[i].name);
            scanf("%s", students[i].name);
            printf("Enter new age (current: %d): ", students[i].age);
            scanf("%d", &students[i].age);
            printf("Enter new grade (current: %s): ", students[i].grade);
            scanf("%s", students[i].grade);
            printf("Student details updated successfully!\n");
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

