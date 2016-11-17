#include <iostream>
#include <string>

using namespace std;
int main() {
	int* pAPointer;		//declare a pointer

	int* pScore = 0;	//declare and initialize pointer

	int score = 1000;
	pScore = &score;	//assign pointer pScore address of variable score

	cout << "Assigning &score to pScore\n";
	cout << "&score is: " << &score << endl;
	cout << "pScore is: " << pScore << endl;
	cout << "score is: " << score << endl;
	cout << "*pScore is: " << *pScore << endl << endl;

	cout << "Adding 500 to score\n";
	score += 500;
	cout << "score is: " << score << endl;
	cout << "*pScore is: " << *pScore << endl << endl;

	cout << "Adding 500 to score\n";
	score += 500;
	cout << "score is: " << score << endl;
	cout << "*pScore is: " << *pScore << endl << endl;

	cout << "Assigning &newScore to pScore \n";
	int newScore = 50000;
	pScore = &newScore;
	cout << "&newScore is: " << &newScore << endl;
	cout << "pScore is: " << pScore << endl;
	cout << "newScore is: " << newScore << endl;
	cout << "*pScore is: " << *pScore << endl << endl;
	cout << "Assigning &str to pStr\n";
	string str = "score";
	string* pStr = &str;
	cout << "str is: " << str << endl;
	cout << "*pStr is: " << *pStr << endl;
	cout << "(*pStr).size() is: " << (*pStr).size() << endl;
	cout << "pStr->size() is: " << pStr->size() << endl;

	return 0;
}
