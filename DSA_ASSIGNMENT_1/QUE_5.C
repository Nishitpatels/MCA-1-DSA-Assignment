#include <stdio.h>

#define STUDENTS 20
#define SUBJECTS 5

int main() {
    int MARKS[STUDENTS][SUBJECTS];
    float avgSubject[SUBJECTS] = {0};   // store average of each subject
    float avgStudent[STUDENTS] = {0};   // store average of each student
    int below50 = 0;

    // Input marks
    printf("Enter marks of %d students in %d subjects:\n", STUDENTS, SUBJECTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &MARKS[i][j]);
        }
    }

    // (a) Average of each subject
    for (int j = 0; j < SUBJECTS; j++) {
        int sum = 0;
        for (int i = 0; i < STUDENTS; i++) {
            sum += MARKS[i][j];
        }
        avgSubject[j] = (float)sum / STUDENTS;
    }

    // (b) Average of each student
    for (int i = 0; i < STUDENTS; i++) {
        int sum = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            sum += MARKS[i][j];
        }
        avgStudent[i] = (float)sum / SUBJECTS;

        // (c) Count students below 50 average
        if (avgStudent[i] < 50)
            below50++;
    }

    // (d) Display scores of each student
    printf("\n--- Scores of Each Student ---\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%d ", MARKS[i][j]);
        }
        printf("\n");
    }

    // Display average per subject
    printf("\n--- Average Marks of Each Subject ---\n");
    for (int j = 0; j < SUBJECTS; j++) {
        printf("Subject %d: %.2f\n", j + 1, avgSubject[j]);
    }

    // Display average per student
    printf("\n--- Average Marks of Each Student ---\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student %d: %.2f\n", i + 1, avgStudent[i]);
    }

    // Display number of students below 50 average
    printf("\nNumber of students with average marks below 50 = %d\n", below50);

    return 0;
}
