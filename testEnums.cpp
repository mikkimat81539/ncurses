#include <iostream>

using namespace std;

int main(){
	int energy = 100;
	int userSelection;
	int deplete;

	enum Actions {
		STAND,
		WALK,
		SKIP,
		JOG,
		RUN
	};	

	cout << "Current energy at " << energy << " percent." << endl;	

	cout << "Do you want to STAND(0), WALK(1), SKIP(2), JOG(3), OR RUN(4): ";

	cin >> userSelection;

	enum Actions stand = STAND;
	enum Actions walk = WALK;
	enum Actions skip = SKIP;
	enum Actions jog = JOG;
	enum Actions run = RUN;

	if(userSelection  == stand){
		cout << "You have used up 0 percent energy" << endl;
		cout << "Your current energy is " << energy << " percent" << endl;
	}	

	else if(userSelection == walk){
		deplete = energy - 25;
		cout << "You have used up 25 percent energy" << endl;
		cout << "You have " << deplete << " percent remaining" << endl; 	
	}

	else if(userSelection == skip){};

	else if (userSelection == jog){};

	else if (userSelection == run){};
	
	return 0;
}
