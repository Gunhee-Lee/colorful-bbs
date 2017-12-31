#include <ncurses.h>

int main()
{
	initscr();
	printw("Colorful BBS Main Menu");
	refresh();
	getch();
	endwin();

	return 0;
}
