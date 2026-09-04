#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    char answer[100];
    int score = 0;
    int randomValue;

    srand(time(NULL));

    printf("====================================\n");
    printf("       🕵️ MINI LIE DETECTOR 🕵️\n");
    printf("====================================\n");
    printf("Answer the questions honestly!\n");
    printf("Type YES or NO.\n\n");

    // Question 1
    printf("1. Have you ever cheated in an exam? ");
    scanf("%s", answer);

    randomValue = rand() % 10;

    if (strcmp(answer, "YES") == 0 || strcmp(answer, "yes") == 0) {
        score += 10;
    } else {
        score += randomValue;
    }

    // Question 2
    printf("2. Have you ever used your phone when you were not supposed to? ");
    scanf("%s", answer);

    randomValue = rand() % 10;

    if (strcmp(answer, "YES") == 0 || strcmp(answer, "yes") == 0) {
        score += 10;
    } else {
        score += randomValue;
    }

    // Question 3
    printf("3. Have you ever lied to your best friend? ");
    scanf("%s", answer);

    randomValue = rand() % 10;

    if (strcmp(answer, "YES") == 0 || strcmp(answer, "yes") == 0) {
        score += 10;
    } else {
        score += randomValue;
    }

    // Question 4
    printf("4. Do you secretly check your phone during class? ");
    scanf("%s", answer);

    randomValue = rand() % 10;

    if (strcmp(answer, "YES") == 0 || strcmp(answer, "yes") == 0) {
        score += 10;
    } else {
        score += randomValue;
    }

    // Result
    printf("\n====================================\n");
    printf("          ANALYZING...\n");
    printf("====================================\n");

    printf("Your Lie Score: %d%%\n\n", score);

    if (score >= 35) {
        printf("🚨 RESULT: HIGHLY SUSPICIOUS!\n");
        printf("The machine thinks you are hiding something! 😂\n");
    }
    else if (score >= 20) {
        printf("⚠️ RESULT: MAYBE LYING!\n");
        printf("Your answers look a little suspicious. 😏\n");
    }
    else {
        printf("✅ RESULT: PROBABLY HONEST!\n");
        printf("You passed the test... maybe! 😎\n");
    }

    printf("\nThank you for using the Mini Lie Detector!\n");

    return 0;
}
