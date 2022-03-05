#include <stdio.h>

int main()
{
    int Secretnumber = 5;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    int outofguesses = 0;

    while (guess != Secretnumber && outofguesses == 0)
    {
        if (guesscount < guesslimit)
            
        {
            printf("guess the number:");
            scanf("%d", &guess);
            guesscount++;
        }
        else
        {
            outofguesses = 1;
        }
    }
    if (outofguesses == 1)
    {
        printf("sorry you're out of guesses, you lose.");
    }
    else
    {
        printf("you win!");
    }

    return (0);
}