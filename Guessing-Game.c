#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));

   int num = rand() % 10 + 1;
   int guess = 0;

   while(guess != num) {
    printf("%d\n", num);
    printf("Guess The Number: ");
    if (scanf("%d", &guess) == 1) {
        if (guess == num) {
            printf("You Won!\n");
        } else if (guess > num) {
            printf("Lower\n");
        } else if (guess < num) {
            printf("Higher\n");
        }
    } else {
        printf("Enter A Valid Number\n");
        while (getchar() != '\n');
    }
}
    return 0;
}