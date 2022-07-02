#include <ncurses.h>
//#include <string>

int main()
{	
    char* s = "hello world";
	initscr();			/* Start curses mode 		  */
    raw();
    //cbreak();
    keypad(stdscr, TRUE);
    noecho();

    int ch = getch();
    if (ch == KEY_BACKSPACE) {
        printw("press the backspace.");
    } else if (ch == KEY_F(1))	{
        printw("press the F1");
    }
    //refresh();
	printw(s);	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	ch = getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */

	return 0;
}
