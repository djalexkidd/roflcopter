#include <stdio.h>
#include <unistd.h>

int main()
{
    while (1)
    {
        clearScreen();
        puts(
    " ROFL:ROFL:\n"
    "         _^___\n"
    "      __/   [] \\ \n"
    "LOL===__        \\ \n"
    "        \\________]\n"
    "         I   I\n"
    "        --------/"
        );
        clearScreen();
        puts(
    "          :ROFL:ROFL\n"
    "         _^___\n"
    " L    __/   [] \\ \n"
    " O ===__        \\ \n"
    " L      \\________]\n"
    "         I   I\n"
    "        --------/"
        );
    }
}

void clearScreen()
{
    usleep(100000);
    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}