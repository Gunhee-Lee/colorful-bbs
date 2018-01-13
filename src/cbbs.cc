#include <ncurses.h>
#include "controller/Controller.h"
#include <json.hpp>

using json = nlohmann::json;

int main()
{
	initscr();
	start_color();
	printw("Initializing...");
	refresh();

	Controller ctlr;
	ctlr.mainMenu();

	endwin();

	json jtest;
}

