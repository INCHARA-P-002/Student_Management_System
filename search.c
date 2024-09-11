#include "SM.h"
 //Function to search for a student by ID
void searchStudent(struct Student students[], int count) {
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Student found: ID: %d, Name: %s, Age: %d, Grade: %s\n",
                   students[i].id, students[i].name, students[i].age, students[i].grade);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

