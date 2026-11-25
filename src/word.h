#ifndef WORD_H
#define WORD_H




#define WORD_LEN 64

typedef struct {
    char word[WORD_LEN];
    char hint[WORD_LEN];
} WORDS;

extern WORDS selected_entry;

void word_selector(void);


#endif