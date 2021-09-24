//
// Created by hengxin on 9/24/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  const int high = 100;
  int number_of_tries = 7;

  /**
   * Prompt
   */
  printf("Now let us play the \"Guess the Number\" game. \n"
         "I (as a computer) will generate a random number (denoted X) between 0 and %d which you are going to guess. \n"
         "Each time you guess a number and I will let you know whether it is less than, equal to, or greater than X. \n"
         "You have %d tries in total. \n"
         "Good luck!\n", high, number_of_tries);

  /**
   * Generate a random number between 0 .. high
   */
  srand((unsigned int) time(NULL));
  int r = rand() % high;

  /**
   * Prompt: Please input you guess
   */
  printf("Please input your guess. You still have %d tries.\n", number_of_tries);

  /**
   * Get the guess from the player
   */
  int guess;
  while (number_of_tries > 0) {
    scanf("%d", &guess);
    number_of_tries--;

    /**
     * Compare the guessed number with the generated one
     * and inform the player of the result
     */
    if (guess == r) {
      printf("Congratulations! You Win!");
      break;
    } else if (guess > r) {
      printf("X is smaller.\n");
    } else {
      printf("X is larger.\n");
    }

    if (number_of_tries > 0) {
      printf("You still have %d tries. Please try again.\n", number_of_tries);
    } else {
      printf("Sorry, you lose.");
    }
  }

  return 0;
}

