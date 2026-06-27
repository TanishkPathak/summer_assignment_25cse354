#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float eng, math, sci, sst, comp;
    float total, percentage;
    char grade;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks in English: ");
    scanf("%f", &eng);

    printf("Enter Marks in Mathematics: ");
    scanf("%f", &math);

    printf("Enter Marks in Science: ");
    scanf("%f", &sci);

    printf("Enter Marks in Social Science: ");
    scanf("%f", &sst);

    printf("Enter Marks in Computer: ");
    scanf("%f", &comp);

    total = eng + math + sci + sst + comp;
    percentage = total / 5;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n========== STUDENT MARKSHEET ==========\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);

    printf("\nMarks Obtained:\n");
    printf("English         : %.2f\n", eng);
    printf("Mathematics     : %.2f\n", math);
    printf("Science         : %.2f\n", sci);
    printf("Social Science  : %.2f\n", sst);
    printf("Computer        : %.2f\n", comp);

    printf("\nTotal Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    if (grade == 'F')
        printf("Result      : FAIL\n");
    else
        printf("Result      : PASS\n");

    return 0;
}