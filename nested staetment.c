#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 75) {
        printf("Grade: Distinction\n");

        if (marks > 90) {
            printf("Excellent performance!\n");
        } else {
            printf("Very good performance!\n");
        }

    } else if (marks >= 60) {
        printf("Grade: First Class\n");

        if (marks >= 70) {
            printf("Good improvement!\n");
        } else {
            printf("Keep practicing!\n");
        }

    } else if (marks >= 35) {
        printf("Grade: Pass\n");
        printf("You can do better.\n");

    } else {
        printf("Grade: Fail\n");
        printf("Work harder next time.\n");
    }

    return 0;
}
