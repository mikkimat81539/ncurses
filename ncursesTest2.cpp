#include <ncurses.h>

// GLOBAL VARIABLES
void eat();
void sleep();
void  run();
int key;

int main(){
	initscr();
	keypad(stdscr, TRUE);
	noecho();

	printw("What do you want to do, EAT, SLEEP, or RUN?\n");
	printw("Press E to eat\n");
	printw("Press Z to sleep\n");
	printw("Press R to run\n\n");

	key = getch();

	if(key == 'e'){
		printw("You decide to eat.\n\n");
		eat();
	}

	getch();
	endwin();
	return 0;
}

// FUNCTIONS
void eat(){
	printw("What do you want to eat, an APPLE, a BANANA or, a COCONUT?\n");
	printw("Press A for apple\n");
	printw("Press B for banana\n");
	printw("press C for coconut\n\n");

	key = getch();
		
	if(key == 'a'){
		printw("You ate an apple\n");
	}

	else if(key == 'b'){
		printw("You are a banana\n");
	}

	else if(key == 'c'){
		printw("You ate a coconut\n");
	}

	else {
		printw("You decided to eat nothing");
	}
}	
