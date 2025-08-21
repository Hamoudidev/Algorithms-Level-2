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

void LetterPattern(int Number) {
	cout << "\n";

	for (int i = 65; i <= 65 + Number - 1; i++) {
		for (int j = 1; j <= i - 65 + 1; j++) {
			cout << char(i);
		}
		cout << "\n";
	}
}


int main() {

	LetterPattern(readPositiveNumber("Please enter a positive number ?"));

	return 0;
}
