#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <raylib.h>
#include <time.h>
#include "game.h"
#include "interface.h"
#include "word.h"

extern WORDS selected_entry;
extern PAGE PAGE_WINDOW;

int main(void)
{
    srand((unsigned int)time(NULL));
    word_selector();

    logic();    // based on console

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "HANGMAN");

    while (!WindowShouldClose())
    {
        Vector2 mouse_location = (Vector2){-1, -1}; 

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            mouse_location = GetMousePosition();
        
        BeginDrawing();

        page_selector(mouse_location);
        
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}