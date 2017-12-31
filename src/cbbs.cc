#include <ncurses.h>
#include "controller/Controller.h"

int main()
{
	initscr();
	printw("Initializing...");
	refresh();

	Controller ctlr;
	ctlr.mainMenu();

	endwin();
}

