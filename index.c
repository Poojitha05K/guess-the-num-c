#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int random,guess,no_of_guesses=0;
    srand(time(NULL));
    printf("Welcome to the world of guessing numbers\n");
    random=rand()%100+1;
    do
    {
        printf("Please enter your guess between 1 to 100  ");
        scanf("%d",&guess);
        no_of_guesses++;
        
        if(guess<random)
        printf("\nEnter a larger number");
        else if(guess>random)
        printf("\nEnter a smaller number");
        else
        printf("\nCongratulations!You have guessed the number after %d guesses",no_of_guesses);
    }while(guess!=random);
    return 0;
}