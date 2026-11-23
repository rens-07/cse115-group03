#ifndef INTERFACE_H
#define INTERFACE_H




#define SCREEN_WIDTH 1600
#define SCREEN_HEIGHT 900

typedef enum
{
    HOME,
    LOGIN,
    REGISTRATION,
    MAIN_MENU,
    GAME_INTERFACE

}PAGE;

extern Color background;
extern PAGE PAGE_WINDOW;

void page_selector(Vector2);
void home_page(Vector2);
void login_page(Vector2);
void registration_page(Vector2);
void main_menu(Vector2);
void game_interface(Vector2);

#endif