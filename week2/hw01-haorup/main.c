#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// This function prints the header to prompt users to enter a number.
int print_header() {

    for ( int i = 0; i < 40; i++) {
        printf("=");
    }

    printf("\n CPU says: pick a number between 1 and 10!\n");

    for ( int i = 0; i < 40; i++) {
        printf("=");
    }

    printf("\n");

    return 0;
}

// This function prints the header of game results.
int print_result_header() {

    for ( int i = 0; i < 55; i++) {
        printf("=");
    }

    printf("\n|Here are the results of your guessing abilities|\n");

    for ( int i = 0; i < 55; i++) {
        printf("=");
    }

    printf("\n");
    
    return 0;
}

/*This function serve as a guessing game.
 * Users are prompted to enter a number betwee 1 and 10, 
 * until the number  is same as a random number.
 * Or users fail all the five guesses.
 */
int guess_number() {

    int number_entered_by_user;
    int min = 1; // lower bound of target number in guessing game
    int max = 10; // upper bound of target number in guessing game
    int round_of_games = 0;  // number of round
    int number_of_guesses = 0;  // number of guesses in each round
    int arr_number_of_guesses[5][1]; // store number of guesses in each round
    int if_guess_right = 1; // control variable: if the game continue in each round, 1 is ture and -1 is false.
     
    while (round_of_games < 5) {

        // print the header of game
        print_header();
        
        // generate random number
        int target_number = rand() % (max - min) + min; 

        // loop of guessing game
        while (if_guess_right == 1) {
            printf("Make a guess:");
            scanf("%d", &number_entered_by_user);
            if (number_entered_by_user == target_number) {
                printf("You got it!\n\n");
                if_guess_right = -1;
            }
            else if (number_entered_by_user > target_number) {
                printf("Wrong! Guess lower!\n\n");
            }
            else {
                printf("Wrong! Guess higher!\n\n");
            }
            number_of_guesses++;
        }
        arr_number_of_guesses[round_of_games][0] = number_of_guesses;
        number_of_guesses = 0; // restore the value of guesses to 0 for next round
        if_guess_right = 1; // restore the control variable to 1 for next round
        round_of_games++;
    }

    // Print the result of guessing game
    print_result_header();
    for ( int i = 0; i < round_of_games; i ++) {
        printf("Game %d took you %d guesses\n", i, arr_number_of_guesses[i][0]);
    }

   return 0;
}


/* main function: call the guess_number function to play the game
 * use clock() function to record gaming time
 */
int main() {

    guess_number();  // call guess_number() to play the guessing game

    return 0;
}















