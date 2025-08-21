#include <iostream>
#include <string>
using namespace std;

float readPositiveNumber(string Message) {
	float Number;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void invertedLetterPattern(int Number) {
	cout << "\n";

	for (int i = 65 + Number - 1; i >= 65; i--) {
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++) {
			cout << char(i);
		}
		cout << "\n";
	}
}


int main() {

	invertedLetterPattern(readPositiveNumber("Please enter a positive number ?"));

	return 0;
}
