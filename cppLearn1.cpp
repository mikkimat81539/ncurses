#include <iostream>
#include <ctime>

using namespace std;

// GLOBAL VARIABLES
int setup();
void counting();

int main(){
	//setup();
	counting();

	return 0;
}

// FUNCTIONS
int setup() {
	srand(time(0));
	int randomNum = rand() % 11;
	return randomNum;
}

void counting(){
	for(int i=1; i <= 5; i++){
		cout << setup() << endl;
	}
}
