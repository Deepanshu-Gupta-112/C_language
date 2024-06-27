/* Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F=*
 *
 *
 *
 *
 *
 * */
#include <stdio.h>

int main() {
    float score;
    printf("Enter the score (0-100): ");
    scanf("%f", &score);

    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
    } else if (score >= 80 && score < 90) {
        printf("Grade: B\n");
    } else if (score >= 70 && score < 80) {
        printf("Grade: C\n");
    } else if (score >= 60 && score < 70) {
        printf("Grade: D\n");
    } else if (score < 60) {
        printf("Grade: F\n");
    } else {
        printf("Invalid input. Please enter a score between 0 and 100.\n");
    }

    return 0;
}

