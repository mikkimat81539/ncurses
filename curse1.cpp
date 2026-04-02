#include <ncurses.h>

int main(){

	initscr();
	printw("Hello World!!!\n");
	//refresh();
	getch();
	printw("\n");
	printw("How are you?");
	//refresh();
	getch();
	endwin();

	return 0;
}
