#include <ncurses.h>

void myStory();

int suicide(int key){
	printw("Do you want ton kill yourself Y or N?\n");
	key = getch();

	if (key == 'y'){
		printw("You commited suicide, YOU ARE DEAD X/");
	}

	else if (key == 'n'){
		printw("You continue with life without a mother :(\n");
	}

	return key;
}

int main(){
	initscr();
	raw();
	printw("I HATE MY FAMILY\n\n");

	printw("Press ENTER\n\n");

	keypad(stdscr, TRUE);
	noecho();

	int key = getch();

	if(key == '\n' || key == KEY_ENTER){ // ENTER key read as \n
		myStory();
	}

	suicide(key);

	getch();
	endwin();
	return 0;
}

void myStory(){
	printw("Your mother tells you she has breast cancer :(\n\n");
}


