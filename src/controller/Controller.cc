#include "Controller.h"
#include "../view/main_menu.h"
#include <ncurses.h>

int 
Controller::mainMenu()
{
	char input = '0';
	while (input != 'q') 
	{
		printMainMenu();
		input = getch();
	}

	return 0;
}
