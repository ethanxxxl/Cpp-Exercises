// Referencing
// Demonstrates using references

#include <iostream>

using namespace std;

int main() {
	int myScore = 1000;
	int &mikesScore = myScore;	// creates a reference
	
	cout << "myScore is: " << myScore << endl;
	cout << "mikesScore is: " <<  mikesScore << "\n\n";
	cout << "Adding 500 to myScore\n";
	myScore += 500;
	cout << "myScore is: " << myScore << endl;
	cout << "mikesScore is: " << mikesScore << "\n\n";
	
	cout << "Adding 500 to myScore\n";
	myScore += 500;
	cout << "myScore is: " << myScore << endl;
	cout << "mikesScore is: " << mikesScore << "\n\n";

	return 0;
}
