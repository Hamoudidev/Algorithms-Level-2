#include <iostream>
#include <string>
using namespace std;

string readPassword() {
	string password = "";
	cout << "Please enter a password ?" << endl;
	cin >> password;

	return password;
}

void GuessPassword(string password) {
	cout << "\n";
	string word = "";
	int trails = 1;
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int l = 65; l <= 90; l++) {
				//cout << char(i) << char(j) << char(l) << endl;
				word = word + char(i);
				word = word + char(j);
				word = word + char(l);

				cout << "Trail [" + to_string(trails) + "] :" + word << endl;

				if (password == word) {
						cout << endl << "Password is " + word << endl;
						cout << "Found after " + to_string(trails) + " Trail(s)" << endl;
						return;
				}
				trails++;
				word = "";
			}
		}
	}
}

int main() {
	GuessPassword(readPassword());

	return 0;
}
