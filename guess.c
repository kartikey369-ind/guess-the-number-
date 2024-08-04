#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    

    int i;
    printf("ENTER YOUR GUESS : ");
    scanf("%d",&i);



    if(i == randomNumber)
    {
        printf("perfect guess\n");
        return 0;

    }


    else if(i < randomNumber)
    {
                printf("OOPS! Your guess is lower than the original number... TRY AGAIN\n");

    }

     else if(i > randomNumber)
     {
         printf("OOPS! Your guess is higher than the original number... TRY AGAIN\n");
     }




}
