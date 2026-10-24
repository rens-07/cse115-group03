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
