#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    {
        printf("ENTER YOUR GUESS : ");
        scanf("%d", &guessed);

        if (guessed < randomNumber)
        {
            no_of_guesses++;
            printf("OOPS! Your guess is lower than the original number... TRY AGAIN\n");
        }

        else if (guessed > randomNumber)
        {
            no_of_guesses++;
            printf("OOPS! Your guess is higher than the original number... TRY AGAIN\n");
        }

        else
        {
            printf("CONGRATS!!", no_of_guesses);
        }

        no_of_guesses++;
    }
    while (guessed != randomNumber);
    {
        printf("you guessed the number in %d guesses\n", no_of_guesses);
        return 0;
    }
}
