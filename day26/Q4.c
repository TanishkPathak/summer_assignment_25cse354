#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Java\n2. Python\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
        score++;

    // Question 3
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
        score++;

    // Question 4
    printf("\n4. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. ;\n3. ,\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    // Question 5
    printf("\n5. Which function is used to print output in C?\n");
    printf("1. scanf()\n2. print()\n3. printf()\n4. input()\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}