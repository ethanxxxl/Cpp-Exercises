// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main() {
	string username;
	string password;
	bool success;

	cout << "\tGame Designer's Network\n";

	do {
		cout << "\nUsername: ";
		cin >> username;

		cout << "Password: ";
		cin >> password;

		if (username == "S.Meier" && password == "civilization") {
			cout << "\nHey sid.";
			success = true;
		} else if (username == "s.Miyamoto" && password == "mariobros") {
			cout << "\nWhats up, Shigeru?";
			success = true;
		} else if (username == "W.Write" && password == "thesims") {
			cout << "\nHows it goin will?";
			success = true;
		} else if (username == "guest" || password == "guest") {
			cout << "\nWelcome, guest.";
			success = true;
		} else {
			cout << "\nYour login failed.\n";
			success = false;
		}	
	} while (!success);

	return 0;
}
