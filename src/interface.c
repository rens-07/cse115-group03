#include <raylib.h>
#include "interface.h"




PAGE PAGE_WINDOW = HOME;

// Color button_color =  (Color) {230, 166, 50,  255};  // golden amber
// Color button_color =  (Color) {90,  190, 170, 255};  // mutated teal

Color button_color  = (Color) {97, 115, 130, 255};       // mutated blue
Color background    = (Color) {24, 32,  42,  255};       // blue black
Color ex_background = (Color) {16, 24,  42,  255};   

void page_selector(Vector2 mouse)
{
    ClearBackground(background);

    switch (PAGE_WINDOW)
    {
        case HOME:
            home_page(mouse); 
            break;
        case LOGIN:
            login_page(mouse);
            break; 
        case REGISTRATION:
            registration_page(mouse);
            break; 
        case MAIN_MENU:
            main_menu(mouse);
            break;
        case GAME_INTERFACE:
            game_interface(mouse);
            break;
    }
}

void home_page(Vector2 mouse)
{
    int x = (SCREEN_WIDTH  - 470) / 2;
    int y = (SCREEN_HEIGHT - 320) / 2;

    Rectangle login         = {x, y,       470, 130};
    Rectangle registration  = {x, y + 170, 470, 130};

    DrawRectangleRounded(
        login, 0.7f, 73, button_color
    );
    DrawRectangleRounded(
        registration, 0.7f, 73, button_color
    );

    if (CheckCollisionPointRec(mouse, login))   
        PAGE_WINDOW = LOGIN;
    if (CheckCollisionPointRec(mouse, registration))
        PAGE_WINDOW = REGISTRATION;
}

void login_page(Vector2 mouse)
{
    int x = (SCREEN_WIDTH  - 700) / 2;
    int y = (SCREEN_HEIGHT - 250) / 2;

    Rectangle user_name = {x,       y,       700, 70};
    Rectangle password  = {x,       y + 90,  700, 70};
    Rectangle enter     = {x + 500, y + 180, 200, 70};
    Rectangle back      = {x,       y + 180, 200, 70};

    Color enter_button  = (Color) {85,  185, 169, 255};
    Color back_button   = (Color) {235, 239, 243, 255};

    DrawRectangleRounded(
        user_name, 0.7f, 73, button_color
    );
    DrawRectangleRounded(
        password,  0.7f, 73, button_color
    );
    DrawRectangleRounded(
        enter,     0.7f, 73, enter_button
    );
    DrawRectangleRounded(
        back,      0.7f, 73, back_button
    );

    if (CheckCollisionPointRec(mouse, enter))
        PAGE_WINDOW = MAIN_MENU;
    if (CheckCollisionPointRec(mouse, back))
        PAGE_WINDOW = HOME;
}

void registration_page(Vector2 mouse)
{
    
    int x = (SCREEN_WIDTH  - 700) / 2;
    int y = (SCREEN_HEIGHT - 250) / 2;

    Rectangle user_name         = {x,       y,       700, 70};
    Rectangle password          = {x,       y + 90,  700, 70};
    Rectangle confirm_password  = {x,       y + 180, 700, 70};
    Rectangle enter             = {x + 500, y + 270, 200, 70};
    Rectangle back              = {x,       y + 270, 200, 70};

    Color enter_button  = (Color) {85,  185, 169, 255};
    Color back_button   = (Color) {235, 239, 243, 255};

    DrawRectangleRounded(
        user_name,        0.7f, 73, button_color
    );
    DrawRectangleRounded(
        password,         0.7f, 73, button_color
    );
    DrawRectangleRounded(
        confirm_password, 0.7f, 73, button_color
    );
    DrawRectangleRounded(
        enter,            0.7f, 73, enter_button
    );
    DrawRectangleRounded(
        back,             0.7f, 73, back_button
    );

    if (CheckCollisionPointRec(mouse, enter))
        PAGE_WINDOW = LOGIN;
    if (CheckCollisionPointRec(mouse, back))
        PAGE_WINDOW = HOME;
}

void main_menu(Vector2 mouse)
{
    
    ClearBackground(ex_background);

    int x = (SCREEN_WIDTH  - 1300) / 2;
    int y = (SCREEN_HEIGHT - 250)  / 2;

    Rectangle play   = {x,  y,    250, 130};
    Rectangle logout = {30, 800,  160, 60};

    
    Color logout_button   = (Color) {235, 239, 243, 255};

    DrawRectangleRounded(
        play,   0.7f, 73, button_color
    );
    DrawRectangleRounded(
        logout, 0.7f, 73, logout_button
    );

    if (CheckCollisionPointRec(mouse, play))   
        PAGE_WINDOW = GAME_INTERFACE;
    if (CheckCollisionPointRec(mouse, logout))  // can add logout confirmattion page
        PAGE_WINDOW = HOME;
}

void game_interface(Vector2 mouse)
{
    ClearBackground(ex_background);

    int x = (SCREEN_WIDTH  - 1500) / 2;
    int y = (SCREEN_HEIGHT - 600)  / 2;

    Rectangle drawing_hangman   = {x,       y,       540, 540};
    Rectangle text              = {x + 700, y + 180, 700, 160};
    Rectangle back              = {30,      800,     160, 60};

    Color back_button   = (Color) {235, 239, 243, 255};

    DrawRectangleRoundedLines(
        drawing_hangman, 0.3f, 73, WHITE
    );
    DrawRectangleRoundedLines(
        text,            0.3f, 73, WHITE
    );
    DrawRectangleRounded(
        back,            0.7f, 73, back_button
    );

    if (CheckCollisionPointRec(mouse, back))  // can add confirmattion message
        PAGE_WINDOW = MAIN_MENU;
}