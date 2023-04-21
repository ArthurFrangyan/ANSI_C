#include <ncurses.h>

int main() {
    initscr(); // initialize ncurses
    keypad(stdscr, TRUE); // enable keypad
    noecho(); // don't echo input to screen
    int ch;
    while ((ch = getch()) != KEY_F(1)) {
        // handle other keys
    }
    endwin(); // close ncurses
    return 0;
}