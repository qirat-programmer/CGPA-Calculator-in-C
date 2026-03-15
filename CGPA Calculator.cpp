#include <stdio.h>

int main() {
    int courses, i;
    float grade, credit;
    float totalCredits = 0;
    float totalGradePoints = 0;
    float cgpa;

    printf("Enter number of courses: ");
    scanf("%d", &courses);

    for(i = 1; i <= courses; i++) {
        printf("\nCourse %d\n", i);

        printf("Enter grade: ");
        scanf("%f", &grade);

        printf("Enter credit hours: ");
        scanf("%f", &credit);

        totalCredits = totalCredits + credit;
        totalGradePoints = totalGradePoints + (grade * credit);
    }

    cgpa = totalGradePoints / totalCredits;

    printf("\nTotal Credits = %.2f", totalCredits);
    printf("\nTotal Grade Points = %.2f", totalGradePoints);
    printf("\nFinal CGPA = %.2f\n", cgpa);

    return 0;
}
