#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== C Programming Quiz =====\n\n");

    // Question 1
    printf("Q1. Who developed the C language?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. Bjarne Stroustrup\n");
    printf("3. James Gosling\n");
    printf("4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Question 2
    printf("\nQ2. Which symbol is used for comments in C?\n");
    printf("1. //\n");
    printf("2. <!-- -->\n");
    printf("3. #\n");
    printf("4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Question 3
    printf("\nQ3. Which function is used to print output in C?\n");
    printf("1. scanf()\n");
    printf("2. print()\n");
    printf("3. printf()\n");
    printf("4. display()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 4
    printf("\nQ4. Which header file is required for printf()?\n");
    printf("1. math.h\n");
    printf("2. string.h\n");
    printf("3. conio.h\n");
    printf("4. stdio.h\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 4)
        score++;

    // Question 5
    printf("\nQ5. Which loop is guaranteed to execute at least once?\n");
    printf("1. for\n");
    printf("2. while\n");
    printf("3. do-while\n");
    printf("4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\n===== Quiz Result =====\n");
    printf("Your Score = %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}