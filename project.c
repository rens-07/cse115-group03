void print_hangman(int strikes)
{
    printf("\n  +---+\n");
    printf("  |   |\n");
    printf("  %s   |\n", strikes >= 1 ? "O" : " ");
    printf(" %s%s%s  |\n", strikes >= 3 ? "/" : " ", strikes >= 2 ? "|" : " ", strikes >= 4 ? "\\" : " ");
    printf(" %s %s  |\n", strikes >= 5 ? "/" : " ", strikes >= 6 ? "\\" : " ");
    printf("      |\n");
    printf("=========\n\n");
}

void logic(void)
{
    char guess;
    int correct_count = 0, changes;
    word_len();

    char *guessed_word = (char *) malloc(sizeof(char) * (++word_length));
    init_word(guessed_word);
    
    char wrong_guesses[10] = {0};
    int wrong_count = 0;
    
    while (1)
    {
        print_hangman(strikes);
        guess = user_input();
        changes = 0;

        for (int i = 0; selected_node->word[i] != '\0'; i++)
        {
            if (is_sameLetter(selected_node->word[i], guess) && 
                !is_sameLetter(*(guessed_word + i), guess))
            {
                *(guessed_word + i) = guess;
                correct_count++;
                changes = 1;
            } 
            else if (is_sameLetter(*(guessed_word + i), guess))
            {
                changes = -1;
            }

            printf("%c", *(guessed_word + i));
        }

        if (!changes)
        {
            int already_wrong = 0;
            for(int j = 0; j < wrong_count; j++) {
                if(wrong_guesses[j] == guess) {
                    already_wrong = 1;
                    break;
                }
            }
            if(!already_wrong && wrong_count < 9) {
                wrong_guesses[wrong_count++] = guess;
                strikes++;
            }
        }

        printf("\nWrong Guesses: ");
        for(int k = 0; k < wrong_count; k++) {
            printf("%c ", wrong_guesses[k]);
        }
        printf("\n");

        if (strikes == 7)
        {
            print_hangman(strikes);
            printf("\nYou Failed!\n");
            printf("Correct Word : %s\n", selected_node->word);
            break;
        } 
        else if (correct_count == word_length)
        {
            printf("\nCongratulation!\n");
            break;
        }
        printf("\nStrikes : %zu & Correct Guesses: %d\n\n", strikes, correct_count);
    }

    free(guessed_word);
}
