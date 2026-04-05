#include <iostream>

using namespace std;

// a class holding an enum, not a true state pattern implementation.

enum controlSwitch { // List out the states
	ON = 1,
	OFF = 0
};

class Light { // Context class
	public:
	enum controlSwitch bulb; // create an enum variable

	Light(controlSwitch state){ // Constructor
		bulb = state; // enum variable = state parameter
	}
};

int main(){
	Light myLight(OFF); // create class variable
	
	cout << myLight.bulb << endl; // reads the value of the enum
	
	return 0;
}
