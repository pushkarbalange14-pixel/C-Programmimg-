#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    int attempts = 0;

    // Generate a random number
    srand(time(0));
    secret = rand() % 100 + 1;

    printf("=================================\n");
    printf("      SECRET NUMBER GAME\n");
    printf("=================================\n");
    printf("I have chosen a number from 1 to 100.\n");
    printf("Try to guess it!\n\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too high! Try a smaller number.\n\n");
        }
        else if (guess < secret) {
            printf("Too low! Try a bigger number.\n\n");
        }
        else {
            printf("\n🎉 Correct!\n");
            printf("You found the number in %d attempts!\n", attempts);
        }

    } while (guess != secret);

    return 0;
}
