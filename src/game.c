#include <stdio.h>
#include <stdlib.h>
#include "game.h"



unsigned int strikes = 0;
unsigned int word_length = 0;


void clearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");    
    #endif
}


void logic(void)
{
    char guess;
    unsigned int correct_count = 0, 
        changes;
    fword_length();

    char *guessed_word = (char *) malloc(sizeof(char) * (word_length + 1));
    init_word(guessed_word);
    
    clearScreen();
    while (1)
    {
        guess = user_input();
        changes = 0;

        for (int i = 0; selected_node.word[i] != '\0'; i++)
        {
            if (is_sameLetter(*(guessed_word + i), guess))
            {
                changes = -1;
            } else if (is_sameLetter(selected_node.word[i], guess))
            {
                * (guessed_word + i) = guess;
                correct_count++;
                changes = 1;
            }
        }

        if (!changes)
        {
            strikes++;
        }

        clearScreen();
        print_hangman();
        if (strikes != 6)
            printf("%s\n", guessed_word);

        if (strikes == 6)
        {
            printf ("\nYou Failed!\n");
            printf ("Correct Word : %s", selected_node.word);
            break;
        } else if (correct_count == word_length)
        {
            printf ("\nCongratulations!\n");
            break;
        }

        if (strikes == 5)
            printf("\nAttempt Left: %d", 6 - strikes);
        else 
            printf("\n\nAttemts Left: %d", 6 - strikes);

        printf("\t\tCorrectly Guessed: %d\n\n", correct_count);
    }

    free (guessed_word);
}
void to_upper(char *alphabet)
{
    unsigned int ui_alph = (unsigned int)(*alphabet);
    if (ui_alph >= 97 && ui_alph <= 122)
    {
        *alphabet = (char)(ui_alph - 32);
    }  
}


char user_input(void)
{
    char ch;
    printf("?: ");
    scanf(" %c", &ch);
    while (getchar() != '\n');
    to_upper(&ch);
    return ch;
}


void init_word(char *str)
{
    unsigned int i;
    for (i = 0; i < word_length; i++)
    {
        *(str + i) = '_';
    }
    *(str + i) = '\0';
}


void fword_length(void)
{
    while (selected_node.word[word_length] != '\0')
    {
        word_length++;
    }
}


int is_sameLetter(const char alp1, const char alp2)
{
    unsigned int ui_ch1 = (unsigned int)alp1;
    unsigned int ui_ch2 = (unsigned int)alp2;
    if (ui_ch1 == ui_ch2)   return 1;
    return 0;
}
