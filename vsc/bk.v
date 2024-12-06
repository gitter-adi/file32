#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, guess, chances, i;

    // Seed the random number generator
    srand(time(0));
    number_to_guess = rand() % 100 + 1; // Random number between 1 and 100

    // Get the number of chances from the user
    printf("Enter the number of chances you want: ");
    scanf("%d", &chances);

    printf("Guess the number (between 1 and 100). You have %d chances.\n", chances);

    for (i = 1; i <= chances; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == number_to_guess) {
            printf("Congratulations! You've guessed the correct number: %d\n", number_to_guess);
            break;
        } else if (guess < number_to_guess) {
            printf("Your number is below the target. Try again!\n");
        } else {
            printf("Your number is above the target. Try again!\n");
        }
    }

    if (i > chances) {
        printf("Sorry, you've used all your chances. The number was: %d\n", number_to_guess);
    }

    return 0;