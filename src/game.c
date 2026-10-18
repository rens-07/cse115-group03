#include <stdio.h>
#include <stdio.h>
#include "game.h"



size_t strikes = 0;
size_t word_length;

void logic(void)
{
    char guess;
    int correct_count = 0, 
        changes;
    word_len();

    char *guessed_word = (char *) malloc(sizeof(char) * (++word_length));
    init_word(guessed_word);
    
    while (1)
    {
        guess = user_input();
        changes = 0;

        for (int i = 0; selected_node->word[i] != '\0'; i++)
        {
            if ( is_sameLetter ( selected_node->word[i], guess) && 
                !is_sameLetter ( *(guessed_word + i), guess))
            {
                * (guessed_word + i) = guess;
                correct_count++;
                changes = 1;
            } else if (is_sameLetter ( *(guessed_word + i), guess))
            {
                changes = -1; // already guessed
            }

            printf ("%c", *(guessed_word + i));
        }

        if (!changes)
        {
            strikes++;
        }

        if (strikes == 7)
        {
            printf ("\nYou Failed!\n");
            printf ("Correct Word : %s", selected_node->word);
            break;
        } else if (correct_count == word_length)
        {
            printf ("\nCongratulation!\n");
            break;
        }
        printf("\nStrikes : %d & Correct Guesses: %d\n\n", strikes, correct_count);
    }

    free (guessed_word);
}