// Score Rater
// Demonstrates the if statement

#include <iostream>
using namespace std;

int main() {
	if (true) {
		cout << "This will always be displayed.\n\n";
	}
	if (false) {
		cout << "This will never be displayed.\n\n";
	}
	
	int score = 1000;

	if (score) {
		cout << "At least you didn't score zero...\n\n";
	}

	if (score >= 250) {
		cout << "you scored 250 or more, decent.\n\n";
	}

	if (score >= 500) {
		cout << "you scored 500 or more. Nice.\n\n";

		if (score >= 1000) {
			cout << "you scored 1000 or more, Impressive!!!\n";
		}
	}

	return 0;
}
