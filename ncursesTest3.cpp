#include <ncurses.h>

int main(){
	enum Level {
		LOW = 0,
		MEDIUM = 50,
		HIGH = 100
	};

	int key;	

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();

	printw("Pick a level, LOW(0), MEDIUM(1), HIGH(2)\n");

	key = getch();

	if(key == '0'){
		enum Level selection = LOW;
		printw("Your level is at %d", selection);
	}

	else if(key == '1'){
		enum Level selection = MEDIUM;
		printw("Your level is at %d", selection);
	}

	else if(key == '2'){
		enum Level selection = HIGH;
		printw("Your level is at %d", selection);
	}

	else {
		printw("Invalid input ");
		attron(A_BLINK | A_UNDERLINE);
		printw("%c", key);
	}

	getch();
	endwin();

	return 0;
}
