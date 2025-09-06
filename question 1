// Consider an array MARKS[20][5] which sotes the makrs obbtained by 20 students in 5 subjects . Now write a program to"
// a) find the average marks obtained in each subject
// b) find the average marks obtained by every student
// c)findt eht number of students who have scored below 50 in their average
// d) display the scores obtaind by every student

#include <stdio.h>

int main() {
    int MARKS[20][5];
    int i, j;
    float subAvg[5] = {0};    // average of each subject
    float stuAvg[20] = {0};   // average of each student
    int below50 = 0;          // counter for students < 50

    // Input marks
    printf("Enter marks of 20 students in 5 subjects:\n");
    for (i = 0; i < 20; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &MARKS[i][j]);
        }
    }

    // (a) Subject-wise average
    for (j = 0; j < 5; j++) {
        int sum = 0;
        for (i = 0; i < 20; i++) {
            sum += MARKS[i][j];
        }
        subAvg[j] = sum / 20.0;
    }

    // (b) Student-wise average + (c) check below 50
    for (i = 0; i < 20; i++) {
        int sum = 0;
        for (j = 0; j < 5; j++) {
            sum += MARKS[i][j];
        }
        stuAvg[i] = sum / 5.0;
        if (stuAvg[i] < 50)
            below50++;
    }

    // Display results
    printf("\nAverage marks in each subject:\n");
    for (j = 0; j < 5; j++) {
        printf("Subject %d: %.2f\n", j + 1, subAvg[j]);
    }

    printf("\nAverage marks of each student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: %.2f\n", i + 1, stuAvg[i]);
    }

    printf("\nNumber of students with average < 50 = %d\n", below50);

    // (d) Display scores of every student
    printf("\nScores obtained by every student:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d ", MARKS[i][j]);
        }
        printf("\n");
    }

    return 0;
}
