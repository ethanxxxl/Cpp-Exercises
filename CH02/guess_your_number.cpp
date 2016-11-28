// Guess Your Number
// Simple guessing game in which the computer guesses the users number

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));
	
	int number;
	int guessMax = 100;
	int guess = rand() % 100 + 1;
	int guessMin = 0;

	cout << "\tGuess Your Number!\n\n";
	cout << "Enter a number between 1 and 100 for me to guess: ";
	cin >> number;

	do {
		if (guess > number) {
			guessMax = guess;
		} else if (guess < number) {
			guessMin = guess;	
		}
		cout << "my guess is: " << guess << endl;	
		guess = rand() % (guessMax - guessMin + 1) + guessMin; 
	} while (guess != number); 
}
