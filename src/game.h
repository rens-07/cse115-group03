#ifndef GAME_H
#define GAME_H




extern int word_lenght;
extern int strikes;

struct word
{
    int id;
    int word[30];
    struct word *nxt_node;
};
typedef struct word *Word;
typedef struct word *Wordptr;

extern Word selected_node;

void logic(void);
void to_lower(char *character);
char user_input(void);
void init_word(char *word);
void word_len(void);

#endif