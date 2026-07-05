#include <stdio.h>

int main()
{
    int score = 0, answer;

    printf("Quiz Application\n\n");

    printf("1. What is the capital of India?\n");
    printf("1) Mumbai  2) Delhi  3) Kolkata  4) Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    printf("\n2. Which language is used for system programming?\n");
    printf("1) C  2) HTML  3) CSS  4) SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    printf("\n3. What is 5 + 3?\n");
    printf("1) 5  2) 8  3) 10  4) 9\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }

    printf("\nYour final score = %d/3\n", score);

    return 0;
}