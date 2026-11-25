#ifndef GAME_H
#define GAME_H




extern unsigned int word_lenght;
extern unsigned int strikes;

void logic(void);
void to_upper(char *);
char user_input(void);
int is_valid_input(const char);
void init_word(char *);
void fword_length(void);
int is_sameLetter(const char, const char);
void clear_screen(void);

void print_hangman(void);

#endif
