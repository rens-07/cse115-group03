#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"


Word selected_node;

int main(void)
{
    strcpy(selected_node.word, "APPLE");    
    logic();
    
    return 0;
}