#include <ncurses.h>

int main(int argc, char *argv[])
{	initscr();			/* Start curses mode 		*/
    int row, col;
	start_color();			/* Start color functionality	*/
	
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
    init_pair(2, COLOR_YELLOW, COLOR_BLUE);
    getmaxyx(stdscr, row, col);
	mvprintw(row/2, col/2, "A Big string which i didn't care to type fully ");
	mvchgat(row-1, col/2, -1, A_BLINK, 2, NULL);	
	/* 
	 * First two parameters specify the position at which to start 
	 * Third parameter number of characters to update. -1 means till 
	 * end of line
	 * Forth parameter is the normal attribute you wanted to give 
	 * to the charcter
	 * Fifth is the color index. It is the index given during init_pair()
	 * use 0 if you didn't want color
	 * Sixth one is always NULL 
	 */
	refresh();
    getch();
	endwin();			/* End curses mode		  */
	return 0;
}