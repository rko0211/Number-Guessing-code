#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // how to generate a randome number

    int number, guess, nguesses = 0;

    srand(time(0));

    number = rand() % 100 + 1; // Generates a random number between 1 to 100

    // printf("the number is %d\n", number);

    // Keep runnig the loop untill the number is guessed
    do
    {
        printf("Guess the number between 1 to 100\n");

        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed the number in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}