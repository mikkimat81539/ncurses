#include <iostream>

using namespace std;

int main(){
	int energy = 100;

	enum Actions {
		STAND = 0,
		WALK = 25,
		SKIP = 50,
		JOG = 75,
		RUN = 100
	};	

	cout << "current energy at " << energy << " percent." << endl;	

	return 0;
}
