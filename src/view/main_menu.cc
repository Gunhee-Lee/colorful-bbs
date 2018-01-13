#include <ncurses.h>
#include <string.h>

int printMainMenu()
{
	int row, col;
	getmaxyx(stdscr, row, col);
	char mesg[] = "Colorful BBS Main Menu";
	init_pair(1, COLOR_CYAN, COLOR_BLACK);

	mvprintw(3, (col-strlen(mesg))/2, "%s", mesg);

	move(row-3, col/2);
	refresh();

	return 0;
}
