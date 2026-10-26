#ifndef GAME_H
#define GAME_H




extern unsigned int word_lenght;
extern unsigned int strikes;

struct word
{
    int id;
    char word[30];
    struct word *nxt_node;
};
typedef struct word Word;
typedef struct Word *Wordptr;

extern Word selected_node;

void logic(void);
void to_upper(char *);
char user_input(void);
void init_word(char *);
void fword_length(void);
int is_sameLetter(const char, const char);

void print_hangman(void);

#endif