#ifndef GAME_H
#define GAME_H




extern int word_lenght;
extern int strikes;
extern size_t word_lenght;
extern size_t strikes;

struct word
{
    int id;
    int word[30];
    char word[30];
    struct word *nxt_node;
};
typedef struct word *Word;
typedef struct word *Wordptr;
typedef struct Word *Wordptr;

extern Word selected_node;

void logic(void);
void to_lower(char *character);
void to_lower(char *);
char user_input(void);
void init_word(char *word);
void init_word(char *);
void word_len(void);
void login_menu(void);
int is_sameLetter(const char *, const char *);

#endif