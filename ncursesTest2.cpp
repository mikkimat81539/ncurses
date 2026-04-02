#include <ncurses.h>

// GLOBAL VARIABLES
void eat();
void sleep();
void  run();

int key;

int main(){
	initscr();
	raw(); // line buffering disabled
	//cbreak(); // line buffering enabled
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

	else if(key == 'z'){
		printw("You decide to sleep.\n\n");
		sleep();
	}

	else if(key == 'r'){
		printw("You decide to run.\n\n");
		run();
	}

	else{
		printw("You decide to stare at a wall.\n");
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

void sleep(){
	printw("What time do you want to sleep?\n");
	printw("Press 7 to go to be at 7:00PM\n");
	printw("Press 8 to go to be at 8:00PM\n");
	printw("Press 9 to go to be at 9:00PM\n\n");

	key = getch();

	if (key == '7'){
		printw("You went to bed at 7:00PM\n");
	}

	else if (key == '8'){
		printw("You want to bed at 8:00PM\n");
	}

	else if (key == '9'){
		printw("You went to bed at 9:00PM\n");
	}

	else {
		printw("You decide to stay up past your bed time\n");
	}

}

void run(){
	printw("Do you want to walk, run or jog?\n");
	printw("Press w to walk\n");
	printw("Press r to run\n");
	printw("Press j to jog\n\n");

	key = getch();

	if (key == 'w'){
		printw("You are walking\n");
	}

	else if (key == 'r'){
		printw("You are running\n");
	}
	
	else if (key == 'j'){
		printw("You are jogging\n");
	}

	else {
		printw("You decide to sit and relax\n");
	}
}
