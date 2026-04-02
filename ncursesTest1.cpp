#include <ncurses.h>

int main(){
	int key;

	initscr();

	keypad(stdscr, TRUE);
	//raw();
	noecho();

	printw("It is raining, do you want to WALK, RUN, SKIP or SEEK SHELTER?\n");
	printw("Press LEFT to WALK\n");
	printw("Press RIGHT to RUN\n");
	printw("Press DOWN to SKIP\n");
	printw("Press UP to SEEK SHELTER\n\n");

	key = getch();
	if(key == KEY_LEFT){
		printw("You walk home safely.\n");
	}

	else if(key == KEY_RIGHT){
		printw("You run and break your neck.\n");
	}

	else if(key == KEY_DOWN){
		printw("You look like an idiot skipping.");
	}

	else if (key == KEY_UP){
		printw("You go and find shelter nearby.");
	}

	else {
		attron(A_BLINK);
		printw("%c", key);
		attroff(A_BLINK);
		printw(" is an invalid input");
	}

	getch();
	endwin();

	return 0;
}
