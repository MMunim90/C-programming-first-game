#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));

    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    //printf("Random number: %d\n\n", randomnumber);
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if(guessed>randomnumber)
        {
            printf("Lower number please\n\n");
        }
        else if(guessed<randomnumber)
        {
            printf("Higher number please\n\n");
        }
        else
        {
            printf("Congrats!!, This is the exact number.\n\n");
        }
        no_of_guesses++;
    }
    while(guessed!=randomnumber);

    printf("You guess the number in %d guesses", no_of_guesses);

    return 0;
}
